// Question 1: Count distinct number on board
// https://leetcode.com/problems/count-distinct-numbers-on-board/description/?envType=problem-list-v2&envId=math

class Solution {
public:
    int distinctIntegers(int n) {
        if(n==1) return 1;
        return n-1;
    }
};
T.C(1)
O.C(1)
approach:Each number when divided by its previous number will give remainder 1

// Question 2:Chocolate Distribution Problem
// https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
  class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
       sort(a.begin(),a.end());
       int n=a.size();
       if(m>n) return -1;
       int start=0,end=m-1;
       int ans=INT_MAX;
       while(end<n){
           int difference=a[end]-a[start];
           ans=min(ans,difference);
           start++;
           end++;
       }
       return ans;
    }
};
T.C(nlogn)
S.C(1)
approach:First of all sort the array and make a sliding window of size m,starting from 0th index and then kept shifting the window by 1 unit
  to find the minimum difference
