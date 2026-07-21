class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        //har string ko pehle sort krlo and if same key hoti hai toh usko map me store krlo
        for(string s : strs)
        {
            string key = s;
            sort(key.begin(),key.end());
            mp[key].push_back(s);
        }
        vector<vector<string>> ans;

        //x.first contains only key and x.second contains value
        for(auto &x : mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};