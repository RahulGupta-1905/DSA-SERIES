// Q1 Ugly number
// https://leetcode.com/problems/ugly-number/description/?envType=problem-list-v2&envId=math

class Solution {
public:
    bool isUgly(int n) {
        if(n==0) return false;
        while(n%2==0) n/=2;
        while(n%3==0) n/=3;
        while(n%5==0) n/=5;
        if(n==1) return true;
        else return false;
    }
};

// Q2 Reverse bit
// https://www.geeksforgeeks.org/problems/reverse-bits3556/1?page=1&category=Mathematical&difficulty=Easy&sortBy=submissions

class Solution
{
public:
    long long reversedBits(long long x)
    {
        long long result = 0;

        for (int i = 0; i < 32; i++)
        {
            long long bit = x & 1;
            result = (result << 1) | bit;
            x >>= 1;
        }

        return result;
    }
};
