//
// Created by dong Zhang on 12/24/17.
//
//class Solution
//{
//public:
//    bool isValidSudoku(vector<vector<char> > &board)
//    {
//        int used1[9][9] = {0}, used2[9][9] = {0}, used3[9][9] = {0};
//
//        for(int i = 0; i < board.size(); ++ i)
//            for(int j = 0; j < board[i].size(); ++ j)
//                if(board[i][j] != '.')
//                {
//                    int num = board[i][j] - '0' - 1, k = i / 3 * 3 + j / 3;
//                    if(used1[i][num] || used2[j][num] || used3[k][num])
//                        return false;
//                    used1[i][num] = used2[j][num] = used3[k][num] = 1;
//                }
//
//        return true;
//    }
//};

class Leet036{
public:
    bool isValidSudoku(vector<vector<char>> &board){
        int used1[9][9]={0},used2[9][9]={0},used3[9][9]={0};

        for (int i = 0; i < board.s; ++i) {

        }
    }
};