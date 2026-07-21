class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9];
        unordered_set<char> col[9];
        unordered_set<char> box[9];

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j] == '.')
                continue;

                int num = board[i][j];
                int boxind = (i/3)*3 + (j/3);

                //9 sets hai and jaise hi koi element mile usse set me daal do and then check if repeat then return false
                if (row[i].find(num) != row[i].end())
                return false;

                if (col[j].find(num) != col[j].end())
                return false;

                if (box[boxind].find(num) != box[boxind].end())
                return false;

                row[i].insert(num);
                col[j].insert(num);
                box[boxind].insert(num);
            }
        }
        return true;
    }
};