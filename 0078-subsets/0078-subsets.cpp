class Solution {
    private: 
    void solve(int idx, vector<int>& nums, vector<int>& curr, vector<vector<int>>& res)
    {
        if(idx == nums.size())
        {
            res.push_back(curr);
            return;
        }

        curr.push_back(nums[idx]);
        solve(idx+1, nums, curr, res);

        curr.pop_back();
        solve(idx+1, nums, curr, res);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        solve(0, nums, curr, res);
        return res;
    }
};