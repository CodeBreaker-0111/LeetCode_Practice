class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for(int i = digits.size()-1;i>=0;i--)
        {
            //agar 9 se km hai toh just add 1
            if(digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }
            else
            {
                //otherwise 9+1 = 10 toh last 0 and 1 carry starting me add krdena digits me
                digits[i] = 0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};