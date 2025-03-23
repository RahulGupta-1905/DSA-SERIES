// Ques 1 : Longest-common-prefix
 
 class Solution {
 public:
     string longestCommonPrefix(vector<string>& strs) {
         int n = strs.size();
         if(n==1) return strs[0];
         sort(strs.begin(),strs.end());
         string first = strs[0];
         string last = strs[n-1];
         string s = "";
         for(int i=0;i<min(first.size(),last.size());i++){
             if(first[i]==last[i]){
                 s += first[i];
             }
             else return s;
         }
         return s;
 
     }
};
 // TC : O(NlogN)
 // SC : O(1)
   // Ques 2 :Valid Anagram 
 
 class Solution {
 public:
     bool isAnagram(string s, string t) {
         int n=s.length();
         int m=t.length();
 
         if(n!=m) return false;
 
         unordered_map<char,int>sc,tc;
 
         for(int i=0;i<n;i++){
             sc[s[i]]++;
         }
         for(int i=0;i<m;i++){
             tc[t[i]]++;
         }
 
         return sc==tc;
     }
 };
 // TC:O(N)
 // SC:O(N)
