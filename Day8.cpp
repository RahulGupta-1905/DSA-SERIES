//QUESTION 1: Move Zeroes
//Question link: https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
TC:O(N)
SC:O(1)
Approach: Using two pointer approach, a pointer j for all non zero elements and i traversing through the array

//QUESTION 2:Rotate Array
//Question link: https://leetcode.com/problems/rotate-array/submissions/1567296875/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;  
        
        reverse(nums.begin(), nums.end());  
        reverse(nums.begin(), nums.begin() + k);  
        reverse(nums.begin() + k, nums.end());  
    }
};

TC: O(N), SC: O(1)
APPROACH: First reversed the array, then reversed till k th element, then reversed the next elements(k+1 to n)
