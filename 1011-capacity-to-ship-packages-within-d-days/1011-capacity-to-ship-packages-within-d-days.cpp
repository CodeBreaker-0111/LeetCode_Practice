class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        // 1. low hoga sabse bada single package (isise kam capacity rakh hi nahi sakte)
        int low = *max_element(weights.begin(), weights.end());
        
        // 2. high hoga saare packages ka total sum (agar 1 hi din mein sab bhejni ho)
        int high = accumulate(weights.begin(), weights.end(), 0);

        int ans = high;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            int current_day_weight = 0;
            int total_days_needed = 1; // Kam se kam 1 din toh lagega hi

            for (int weight : weights) 
            {
                // Agar is package ko dalne se ship overload ho rahi hai...
                if (current_day_weight + weight > mid) 
                {
                    total_days_needed++;      // ...toh agla din shuru karo
                    current_day_weight = weight; // Yeh package ab naye din ki ship mein jayega
                }
                else 
                {
                    current_day_weight += weight; // Varna usi din ki ship mein load karo
                }
            }
            if (total_days_needed <= days) 
            {
                ans = mid;         
                high = mid - 1;    
            } 
            else 
            {
                low = mid + 1;     // Speed bohot kam thi, badhane ke liye right jao
            }
        }
        return ans;
    }
};