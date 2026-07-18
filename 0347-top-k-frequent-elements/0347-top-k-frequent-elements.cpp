class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //ek map bnaya and array ka data usme store kr lia
        unordered_map<int,int> freq_map;
        for(int num : nums)
        freq_map[num]++;

        //then vector bcz map me sorting nhi kr skte everything is unarranged
        //Har pair hoga: {element, frequency}
        vector<pair<int,int>> freq_vec(freq_map.begin(),freq_map.end());

        //Lambda Function
        sort(freq_vec.begin(), freq_vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) 
        {
            return a.second > b.second; // Agar 'a' ki frequency badi hai, toh woh pehle aayega
        });

        vector<int> result;
        for(int i=0;i<k;i++)
        {
            result.push_back(freq_vec[i].first);
        }
        return result;
    }
};