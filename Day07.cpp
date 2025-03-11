// Question 1: Can place flower
// https://leetcode.com/problems/can-place-flowers/


class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        
        for (int i = 0; i < size; i++) {
            if (n == 0) return true; 
            
            if (flowerbed[i] == 0) {
                bool prev_empty = (i == 0 || flowerbed[i - 1] == 0);
                bool next_empty = (i == size - 1 || flowerbed[i + 1] == 0);
                
                if (prev_empty && next_empty) {
                    flowerbed[i] = 1; 
                    n--; 
                }
            }
        }
        
        return n == 0;
    }
};

T.C(N)
S.C(1)
Approach: Iterate through the flowerbed and if an empty plot (0) has empty neighbors, plant a flower (1) and decrement n. Stop early if n == 0, 
  else return false after the loop

// Question 2: Minimum positive sum subarray
// https://leetcode.com/problems/minimum-positive-sum-subarray/description/?envType=problem-list-v2&envId=prefix-sum

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int min_sum = INT_MAX;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n && j - i + 1 <= r; j++) {
                sum += nums[j];
                int length = j - i + 1;
                if (length >= l && sum > 0) {
                    min_sum = min(min_sum, sum);
                }
            }
        }

        return (min_sum == INT_MAX) ? -1 : min_sum;
    }
};

T.C(n^2)
S.C(1)
