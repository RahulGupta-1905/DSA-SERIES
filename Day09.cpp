Question 1:Two Sum
https://leetcode.com/problems/two-sum/description/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>idx;
       for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target) {
                idx.push_back(i);
                idx.push_back(j);

            }
        }
       } 
       return idx;
    }
};
T.C(N^2)
S.C(1)
Appraoch:Using two nested loops to check every possible pair of elements in the array.If a pair sums to the target, return their indices 

Question 2: Sort Colors
https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void sortColors(vector<int>& nums) {
       int n=nums.size();
       int nzero=0;
       int nones=0;
       int ntwo=0;
       for(int i=0;i<n;i++){
        if(nums[i]==0) nzero++;
        else if(nums[i]==1) nones++;
        else ntwo++;
       } 
       for(int i=0;i<n;i++){
        if(i<nzero) nums[i]=0;
        else if(i<(nzero+nones)) nums[i]=1;
        else nums[i]=2;
       }
       return ;
    }
};
T.C(N)
S.C(1)
Approach:Count the number of 0s, 1s, and 2s in the array.Overwrite the array with the counted number of 0s, followed by 1s, then 2s

Question 3:Maximum Score from Subarray Minimums
https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0

class Solution {
  public:
    int pairWithMaxSum(vector<int> &arr) {
      int n = arr.size();
        if (n < 2) return -1; 

        int mx = -1;
        for (int i = 0; i < n - 1; i++) {
            mx = max(mx, arr[i] + arr[i + 1]);
        }
        return mx;
    }
};
T.C(N)
S.C(1)

