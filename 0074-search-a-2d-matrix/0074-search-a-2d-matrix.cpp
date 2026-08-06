class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int m = matrix.size();
        int low = 0, high = (m*n)-1;

        // if(matrix.empty() ||  matrix[0].empty())
        // return false;
        if(matrix[0][0] > target)
        return false;
        
        while(low <= high)
        {
            int mid = low + (high-low)/2;

            int row = mid/n;
            int col = mid%n;

            int mid_value = matrix[row][col];

            if(mid_value == target)
            return true;

            else if(mid_value < target)
            low = mid+1;

            else
            high = mid-1;
        }
        return false;
    }
};