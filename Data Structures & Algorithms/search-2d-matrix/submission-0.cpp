class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int st = 0,end = n-1;
        while(st <= end){
            int row = st + (end-st)/2;
            if(target > matrix[row][m-1]){
                st = row + 1;
            }else if(target < matrix[row][0]){
                end = row - 1;
            }else{
                break;
            }
        }
        if(!(st <= end))return false;
        int row = st + (end-st)/2;
        int l = 0,r = m-1;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(target > matrix[row][mid]) l = mid+1;
            else if(target < matrix[row][mid]) r = mid -1;
            else
            return true;
        }
        return false;
    }
};
