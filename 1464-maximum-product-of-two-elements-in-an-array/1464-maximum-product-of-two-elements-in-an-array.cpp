class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        sort(nums.begin(), nums.end());

        int i = n-1, j = n-2;

        return product = (nums[i]-1) * (nums[j]-1);
    }
};