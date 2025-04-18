// Day-02
// Question -1 Good or Bad string
// https://www.geeksforgeeks.org/problems/good-or-bad-string1417/1


class Solution {
  public:
    bool isVowel(char ch){
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    int isGoodorBad(string S) {
        int vowel_count=0,conso_count=0,max_vowel=5 ,max_conso=3;
        int n=S.size();
        for(int i=0;i<n;i++){
            if(isVowel(S[i])){
                vowel_count++;
                conso_count=0;
            }
            else if(S[i]=='?'){
                vowel_count++;
                conso_count++;
            }
            else{
                conso_count++;
                vowel_count=0;
            }
            if(conso_count>max_conso || vowel_count>max_vowel) return 0;
        }
        return 1;
        
    }
};

T.C(N)
S.C(1)
Approach
If the character is a vowel Increment vowel_count, reset conso_count .If it is a consonant ,
Increment conso_count, reset vowel_count. if it is a wildcard  Increment both vowel_count and 
conso_count.
If any one of vowel_count>5 or conso_count>3 return 0 else return 1
