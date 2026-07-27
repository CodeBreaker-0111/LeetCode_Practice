class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int maxdist = 0;
        int i=0, j = n-1;

        //Shrink the window from both ends
        while(colors[i] == colors[n-1])
        {
            i++;
        }
        while(colors[j] == colors[0])
        {
            j--;
        }
        return max(n-1-i,j);
    }
};