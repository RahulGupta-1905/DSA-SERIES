//Question 1:Pascal's Triangle
//https://leetcode.com/problems/pascals-triangle/description/  
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int> >v;
       for(int i=1;i<=numRows;i++){
        vector<int>a(i);
        v.push_back(a);
       } 
       for(int i=0;i<numRows;i++){
        for(int j=0;j<=i;j++){
            if(j==0|| j==i){
                v[i][j]=1;
            }
            else{
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
       }
       return v;
    }
};
// O(N^2)
// S.C:O(N^2)
// Approach:Start each row with 1s at both ends, and fill middle values using the sum of two elements from the previous row.

//Question 2:Rotate Image
//https://leetcode.com/problems/rotate-image/description/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
        int j1=0,j2=n-1;
        while(j1<j2 && i<n){
            swap(matrix[i][j1],matrix[i][j2]);
            j1++;
            j2--;
        }
        }
            return ;
    }
// T.C(N^2)
//S.C(1)
// Appraoch:First, transpose the matrix (swap matrix[i][j] with matrix[j][i]).Then, reverse each row to complete the 90-degree clockwise rotation

Question 3:Spiral Matrix
https://leetcode.com/problems/spiral-matrix/description/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
      vector<int>v;
      int m=a.size();
      int n=a[0].size();
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    while (minr <= maxr && minc <= maxc){

    for(int j=minc;j<=maxc;j++){
        v.push_back(a[minr][j]);
    }
    minr++;
    if(minr>maxr || minc>maxc) break;
    for(int i=minr;i<=maxr;i++){
        v.push_back(a[i][maxc]);
    }
    maxc--;
     if(minr>maxr || minc>maxc) break;
    for(int j=maxc;j>=minc;j--){
        v.push_back(a[maxr][j]);
    }
    maxr--;
     if(minr>maxr || minc>maxc) break;
    for(int i=maxr;i>=minr;i--){
        v.push_back(a[i][minc]);
    }
    minc++;
    }
    return v;
    }
};
// T.C(m*n)
//S.C(1)
// Approach:Use 4 pointers (minr, maxr, minc, maxc) to keep track of current boundaries.Traverse the matrix layer by layer.
