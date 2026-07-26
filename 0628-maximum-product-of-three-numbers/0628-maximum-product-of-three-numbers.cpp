class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size()-1;
        int product1 = 1, product2 = 1;
        sort(nums.begin(), nums.end());
        int i = n, j=n-1, k=n-2;
        product1 = nums[i]*nums[j]*nums[k];
        product2 = nums[0]*nums[1]*nums[n];

        return max(product1,product2);
    }
};