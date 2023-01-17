class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(vector<char> i : board)  {
            unordered_map<char,int> num;
            num = {{'1',0},{'2',0},{'3',0},{'4',0},{'5',0},{'6',0},{'7',0},{'8',0},{'9',0},{'.',0}};
            for( char j : i)  {
                if(num[j])  return false;
                if(j >= '1' && j <= '9')    num[j] = true;
            }
        }
        for(int i = 0; i < 9; i++)  {
            unordered_map<char,int> num;
            num = {{'1',0},{'2',0},{'3',0},{'4',0},{'5',0},{'6',0},{'7',0},{'8',0},{'9',0},{'.',0}};
            for( int j = 0; j < 9; j++)  {
                if(num[board[j][i]])  return false;
                if(board[j][i] >= '1' && board[j][i] <= '9')    num[board[j][i]] = true;
            }
        }
        for(int i = 0; i < 9; i++)  {
            unordered_map<char,int> num;
            num = {{'1',0},{'2',0},{'3',0},{'4',0},{'5',0},{'6',0},{'7',0},{'8',0},{'9',0},{'.',0}};
            for( int j = 0; j < 9; j++)  {
                if(num[board[j][i]])  return false;
                if(board[j][i] >= '1' && board[j][i] <= '9')    num[board[j][i]] = true;
            }
        }
        return true;

    }
};