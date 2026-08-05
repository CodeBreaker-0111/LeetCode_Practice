class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int res = nums[0];
        int curr = 0;
        
        if(nums.empty()) return 0;
        //if(nums.size() == 1) return nums[0];

        for(int i=0;i<n;i++)
        {
            curr = curr + nums[i];
            res = max(res,curr);

            if(curr<0)
            curr = 0;
        }
        return res;
    }
};