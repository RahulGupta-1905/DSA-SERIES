// Day_3 Q1:Flipping an Image
// https://leetcode.com/problems/flipping-an-image/description/?envType=problem-list-v2&envId=array


class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

int n = image.size(); 
    for (int i = 0; i < n; i++) {
        int left = 0, right = n - 1;
        while (left <= right) {
            swap(image[i][left], image[i][right]);  
            image[i][left] ^= 1;  
            if (left != right) 
                image[i][right] ^= 1; 
            left++;
            right--;
        }
    }
    return image;
    }
};

T.C(n^2)
O.C(1)
approach: Iterating through each row of the n x n binary matrix, reversing the row (flipping horizontally) and then inverting each bit 
(changing 0 to 1 and vice versa)


// Question 2:Number of equivalent domino pairs
// https://leetcode.com/problems/number-of-equivalent-domino-pairs/description/?envType=problem-list-v2&envId=2030iluv

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n = dominoes.size();
        for(int i = 0; i < n; i++) {
            if(dominoes[i][0] > dominoes[i][1]) {
                swap(dominoes[i][0], dominoes[i][1]);
            }
        }
        sort(dominoes.begin(), dominoes.end());
  
        int count = 0;
        int cons = 1; 
        
        for(int i = 1; i < n; i++) {
            if(dominoes[i][0] == dominoes[i - 1][0] && dominoes[i][1] == dominoes[i - 1][1]) {
                count += cons; 
                cons++;      
            } else {
                cons = 1;      
            }
        }
        return count;
    }
};
T.C(nlogn)
S.C(1)
approach:Rearrange each domino pair by sorting its two values, then sort the entire list. Iterate through the sorted list, counting
consecutive duplicate pairs to compute the total number of equivalent domino pairs
