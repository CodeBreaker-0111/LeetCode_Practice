class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int maxdist = 0;

        // for(int i=n-1;i>=0;i--)
        // {
        //     if(colors[i] != colors[0])
        //     maxdist = max(maxdist,i);
        //     break;
        // }

        // for(int i=0;i<n;i++)
        // {
        //     if(colors[i] != colors[n-1])
        //     {
        //         maxdist = max(maxdist, n-1-i);
        //         break;
        //     }
        // }
        // return maxdist;

        int i=0;
        int j = n-1;

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