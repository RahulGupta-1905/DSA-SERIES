// Question 1:Isomorphic String
// https://leetcode.com/problems/isomorphic-strings/description/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        int s_char[256] = {0};
        int t_char[256] = {0};

        for (int i = 0; i < s.length(); ++i) {
            if (s_char[s[i]] != t_char[t[i]])
                return false;

            s_char[s[i]] = i + 1;
            t_char[t[i]] = i + 1;
        }

        return true;
    }
};
// T.C(N)
// S.C(1)

// Question 2:Remove Outermost Parentheses
//https://leetcode.com/problems/remove-outermost-parentheses/description

class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int depth = 0;

        for (char ch : s) {
            if (ch == '(') {
                if (depth > 0) result += ch; 
                depth++;
            } else if (ch == ')') {
                depth--;
                if (depth > 0) result += ch; 
            }
        }

        return result;
    }
};
// T.C(N)
//S.C(N)
