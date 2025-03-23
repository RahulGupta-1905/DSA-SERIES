// Question 1 Substrings with K Distinct
//https://bit.ly/3CfQfYi

class Solution {
  public:

    int atMostK(string& s, int k) {
        int n = s.size();
        int left = 0, right = 0, count = 0;
        vector<int> freq(26, 0);
        int distinct = 0;

        while (right < n) {
            if (freq[s[right] - 'a'] == 0) {
                distinct++;
            }
            freq[s[right] - 'a']++;

            while (distinct > k) {
                freq[s[left] - 'a']--;
                if (freq[s[left] - 'a'] == 0) {
                    distinct--;
                }
                left++;
            }

            count += right - left + 1;
            right++;
        }

        return count;
    }

    int countSubstr(string& s, int k) {
        return atMostK(s, k) - atMostK(s, k - 1);
    }
};
//T.C(n)
//S.C(1)

// Question 2 Longest Pallindrome Substring
// https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n <= 1) return s;

        int start = 0, maxLen = 1;

        for (int i = 0; i < n; i++) {
            int l = i, r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l + 1 > maxLen) {
                    start = l;
                    maxLen = r - l + 1;
                }
                l--;
                r++;
            }

            l = i, r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l + 1 > maxLen) {
                    start = l;
                    maxLen = r - l + 1;
                }
                l--;
                r++;
            }
        }

        return s.substr(start, maxLen);
    }
};

//T.C(N^2)
//S.C(1)

