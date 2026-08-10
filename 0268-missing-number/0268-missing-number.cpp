class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int real = 0;
        int sum = n*(n+1)/2;

        for(int i=0;i<n;i++)
        {
            real += nums[i];
        }

        return sum - real;
    }
};