// Ques 1 : string to integer

class Solution {
public:
    int myAtoi(string s) {
        int i=0,n=s.size();
        while(i<n && s[i]==' ') i++; 

        int sign=1;
        if(i<n && (s[i]=='-' || s[i]=='+')){
            if(s[i]=='-') sign = -1;
            i++;
        }

        long num=0;
        while(i<n && s[i]>='0' && s[i]<='9'){
            num=num*10 +(s[i]-'0');

            if(num*sign >INT_MAX) return INT_MAX;
            if(num*sign <INT_MIN) return INT_MIN;
            i++;
        }
        return num*sign;
        }
};
// TC :- O(N)
//  S.C:- O(N)

  // Ques 2 Sort Characters By Frequency

Ques 1 : string to integer


class Solution {
public:
    int myAtoi(string s) {
    /
        int i=0,n=s.size();
        while(i<n && s[i]==' ') i++; 

        int sign=1;
        if(i<n && (s[i]=='-' || s[i]=='+')){
            if(s[i]=='-') sign = -1;
            i++;
        }

        long num=0;
        while(i<n && s[i]>='0' && s[i]<='9'){
            num=num*10 +(s[i]-'0');

            if(num*sign >INT_MAX) return INT_MAX;
            if(num*sign <INT_MIN) return INT_MIN;
            i++;
        }
        return num*sign;
        }
};
TC :- O(n)
  Sc:- O(n)

  Ques 2 :-Sort Characters By Frequency

class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp;
        vector<pair<int,char>>v;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(auto& it:mpp){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        string h;
      
      
       for(int i=0;i<v.size();i++){
          int z=v[i].first;
          while(z>0){
        
            h.push_back(v[i].second);
            z--;
            
        }}

    return h;}
};
