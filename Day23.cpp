// Problem:Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it. If it is impossible for b​​​​​​ to be a substring of a after repeating it, return -1.
// Notice: string "abc" repeated 0 times is "", repeated 1 time is "abc" and repeated 2 times is "abcabc".

class Solution {
  public:
       int repeatedStringMatch(string a, string b) {
          string repeated = a;
          int count = 1;
  
          while (repeated.size() < b.size()) {
              repeated += a;
              count++;
          }
  
          if (repeated.find(b) != string::npos) {
              return count;
          }
  
          repeated += a;
          count++;
          if (repeated.find(b) != string::npos) {
              return count;
          }
  
          return -1; 
      }
  };

TC:O(m+n)
SC:O(m+n)

// Problem:You are given a string s. You can convert s to a palindrome by adding characters in front of it.Return the shortest palindrome you can find by performing this transformation.

class Solution {
  public:
      string shortestPalindrome(string s) {
          string rev = s;
          reverse(rev.begin(), rev.end());
          string combined = s + "#" + rev;
  
          int n = combined.size();
          vector<int> lps(n, 0);
          for (int i = 1; i < n; ++i) {
              int len = lps[i - 1];
              while (len > 0 && combined[i] != combined[len]) {
                  len = lps[len - 1];
              }
              if (combined[i] == combined[len]) {
                  ++len;
              }
              lps[i] = len;
          }
  
          int longestPalPrefix = lps[n - 1];
  
          string prefixToAdd = s.substr(longestPalPrefix);
          reverse(prefixToAdd.begin(), prefixToAdd.end());
  
          return prefixToAdd + s;
      }
  };

TC:O(n)
SC:O(n)
