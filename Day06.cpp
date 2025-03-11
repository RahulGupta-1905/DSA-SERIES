//Question 1:Most visited sector in a circular track
//https://leetcode.com/problems/most-visited-sector-in-a-circular-track/description/?envType=problem-list-v2&envId=array

class Solution {
public:
   vector<int> mostVisited(int n, vector<int>& rounds) {
    int start = rounds[0], end = rounds.back();
    vector<int> result;

    if (start <= end) {
        for (int i = start; i <= end; i++) {
            result.push_back(i);
        }
    } else {
        for (int i = 1; i <= end; i++) {
            result.push_back(i);
        }
        for (int i = start; i <= n; i++) {
            result.push_back(i);
        }
    }

    return result;
}
};

T.C(n)
S.C(n)
Approach:Track the most visited sectors by considering only the path covered in the last round, moving counterclockwise; if start ≤ end, 
return [start, ..., end], otherwise return [1, ..., end] + [start, ..., n]

//Question 2:Stock Span Problem
//https://www.geeksforgeeks.org/problems/stock-span-problem-1587115621/1
class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
    int n = arr.size();  
    stack<int> st;
    vector<int> span(n);

    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }
        span[i] = (st.empty()) ? (i + 1) : (i - st.top());
        st.push(i);
    }
    return span;
}
};
T.C(n)
S.C(n)
Approach:Using a stack to keep track of indices where stock prices are in decreasing order.For each day i, remove smaller prices from the 
stack until a larger price is found.Calculate the span as i - st.top().Push the current day index in the stack and repeat same thing for all days.


