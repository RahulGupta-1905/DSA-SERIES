// Question 1. Find a Peak Element II
// https://leetcode.com/problems/find-a-peak-element-ii/description/

class Solution {
public:
    int findColMax(vector<vector<int>>& mat, int col){
        int maxIndx = 0, maxi = INT_MIN;
        for (int i = 0;i < mat.size();i++){
            if (mat[i][col] > maxi){
                maxi = mat[i][col];
                maxIndx = i;
            }
        }
        return maxIndx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low = 0, high = mat[0].size() - 1, mid;
        while (high >= low){
            mid = low + (high - low) / 2;
            int maxIndx = findColMax(mat, mid);
            if ((mid == 0 || mat[maxIndx][mid] > mat[maxIndx][mid - 1]) && (mid == mat[0].size() - 1 || mat[maxIndx][mid] > mat[maxIndx][mid + 1])){
                return { maxIndx,mid };
            }
            else if (mid > 0 && mat[maxIndx][mid] < mat[maxIndx][mid - 1]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return { -1,-1 };
    }
};

// TC O(rows*log(cols))
//SC O(1)

// Question 2:Median in a row-wise sorted Matrix
// https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1

int occurences(vector<vector<int>>& mat, int num){
    int count = 0;
    for (int i = 0;i < mat.size();i++){
        count += upper_bound(mat[i].begin(), mat[i].end(), num) - mat[i].begin();
    }
    return count;
}
class Solution {
public:
    int median(vector<vector<int>>& mat) {
        int low = 1, high = 2000, mid;
        while (high >= low){
            mid = low + (high - low) / 2;
            if (occurences(mat, mid) > (mat.size() * mat[0].size()) / 2){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};

// TC O(log2(max-min)*rows*log(cols))
// SC O(1)
