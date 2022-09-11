class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int j = 0;
    int i = matrix.size() - 1, siz = matrix[0].size() - 1, mid_column;
    while(j <= i)   {
        mid_column = j + ((i-j)/2);
        if(target >= matrix[mid_column][0] && target <= matrix[mid_column][siz])    {
            j = mid_column;
            break;
        }
        else if(target > matrix[mid_column][siz])    j = mid_column + 1;
        else    i = mid_column - 1;
    }
    if(j == matrix.size())   return false;

        int l = 0, r = siz, mid;
        while(l <= r)   {
            mid = l + ((r-l)/2);
            if(matrix[j][mid] == target)    return true;
            else if(target < matrix[j][mid])    r = mid - 1;
            else    l = mid + 1;
        }
        return false;
    }
};
