// Ques 1 : Roman to Integer

class Solution {
    public:
        int romanToInt(string s) {
            int n = s.size();
            int sum = 0;
            map <char , int > mpp={
                {'I',1},{'V',5},{'X',10},{'L',50},
                {'C',100},{'D',500},{'M',1000}
            };
            for(int i=0;i<n;i++){
                sum+=mpp[s[i]];
                for(int j=i+1;j<n;j++){
                    if(mpp[s[i]]<mpp[s[j]]) {
                        sum-=2*mpp[s[i]];
                        break;
                    }
                }
            }
            return sum;
        }
    };

// TC : O(N^2)  
//  SC : O(1) 

  // Ques 2  Maximum Nesting Depth of the Parentheses
class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push('(');
                int x=st.size();
                maxi=max(maxi,x);
            }
            else if(s[i]==')'){
                st.pop();
            }
            
        }
    return maxi;}
};

//T.C(N)
//S.C(N)
