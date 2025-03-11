//Question 1: rearrange array elements by sign
// https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

 class Solution {
 public:
     vector<int> rearrangeArray(vector<int>& nums) {
         vector<int>v1,v2,ans;
         for(int i=0;i<nums.size();i++) {
             if(nums[i]>0)
             v1.push_back(nums[i]);
             else 
             v2.push_back(nums[i]);
         }
         int idx1=0,idx2=0;
         while(idx2<nums.size()/2){
             ans.push_back(v1[idx1]);
             idx1++;
             ans.push_back(v2[idx2]);
             idx2++;
         }
         return ans;
     }
 };
 
 //T.C=O(n)
 //S.C=O(n)
 
 //Question 2: next permutation 
 //https://leetcode.com/problems/next-permutation/description/

 class Solution {
 public:
     void nextPermutation(vector<int>& nums) {
         int i=nums.size()-1;
         while (i>0 && nums[i-1]>=nums[i]) {
             i--;
         }  
         if (i==0){
             reverse(nums.begin(),nums.end());
             return;
         }
         int j=nums.size()-1;
         while (j>=i && nums[j]<=nums[i-1]) {
             j--;
         }    
         swap(nums[i-1],nums[j]);
         reverse(nums.begin()+i,nums.end());        
     }
 };
 
 //T.C=O(n)
 //S.C=O(1) 
 
//Question 3: Best time to buy and sell stock 
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
 class Solution {
 public:
     int maxProfit(vector<int>& prices) {
          int buy=prices[0];
         int profit=0;
         for(int i=1; i<prices.size(); i++){
             if(prices[i]<buy){
                 buy=prices[i];
             } else if(prices[i]-buy>profit){
                 profit=prices[i]-buy;
             }
         }
         return profit;
     }
 };
 //T.C=O(n)
 //S.C=O(1)
