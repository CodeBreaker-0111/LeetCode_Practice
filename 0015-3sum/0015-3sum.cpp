class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-1;i++)
        {
            //duplicates handling
            if(i>0 && nums[i] == nums[i-1])
            continue;

            //j and k initializes
            int j=i+1, k=n-1;

            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    
                    //duplicates handling in j
                    while(j<k && nums[j] == nums[j-1])
                    j++;
                }
                else if(sum<0)
                j++;
                else if(sum>0)
                k--;
            }
        }
        return res;
    }
};