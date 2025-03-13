//Question 1:Binary Search
//https://leetcode.com/problems/binary-search/description/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) lo=mid+1;
            else hi=mid-1;
        }   
        return -1;
        }
};
// T.C(logn)
// S.C(1)

// Question 2:Find First and Last Position of Element in Sorted Array
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int lo = 0, hi = nums.size() - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] < target)
                lo = mid + 1;
            else {
                if (nums[mid] == target) ans[0] = mid;
                hi = mid - 1; 
            }
        }
        lo = 0, hi = nums.size() - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] > target)
                hi = mid - 1;
            else {
                if (nums[mid] == target) ans[1] = mid;
                lo = mid + 1;
            }
        }

        return ans;
    }
};
// T.C(logn)
//S.C(1)

// Question 3:Search Insert Position
//https://leetcode.com/problems/search-insert-position/description/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) lo=mid+1;
            else hi=mid-1;
        }   
        return lo; 
    }
};
// T.C(logn)
//S.C(1)
