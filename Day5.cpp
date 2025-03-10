Q1:Distribute Money to Maximum Children
https://leetcode.com/problems/distribute-money-to-maximum-children/description/?envType=problem-list-v2&envId=math

class Solution {
public:
    int distMoney(int money, int children) {
        if(money<children)
        return -1;
        int rem=money-children;
        int ans=0;
        while(rem>=7 && ans<children)
        {
            ans++;
            rem-=7;
        }

        if((rem>0 && ans==children) || (rem==3 && children-ans==1)) 
        ans--;
        return ans;}

};
T.C: O(1)
SC:O(1)
approach: 


Q2.Longest Palindrome
https://leetcode.com/problems/longest-palindrome/description/?envType=problem-list-v2&envId=greedy

class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m;
        int count=0;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(auto i:m){
            if(i.second>1) {
                if(i.second%2==0){
                count+=i.second;}
            else if(i.second%2!=0 && i.second == s.length()) return i.second;
            
            else if(i.second>1 && i.second%2 !=0){
                count = count + i.second - 1;
            }
            }

        }
           if(count<s.length()) return count+1;
        else return count;
        
        }
    };

TC:O(n)
SC:O(n)
