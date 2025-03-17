//Question 1:Ceiling in a sorted array
//https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401

int ceil(vector<int> &a,int n,int x){
	int low = 0;int high = n-1;
	int result = n;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(a[mid]>=x){
			result = mid;
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	if(result!=n)return a[result];
	return -1;

}
int floor(vector<int> &a,int n,int x){
	int low = 0;int high = n-1;
	int result = -1;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(a[mid]<=x){
			result = mid;
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	if(result!=-1)return a[result];
	return result;
	
}
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int fl = floor(a,n,x);
	int cl = ceil(a,n,x);
	return{fl,cl};

}

//TC: O(logN)
//SC: O(1)

//QUESTION 2:Find minimum in rotated sorted array
//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0,high = n-1, ans = INT_MAX;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[low]<=nums[high]){
                ans = min(ans, nums[low]);
                break;
            }
            if(nums[low]<=nums[mid]){
                ans = min(nums[low],ans);
                low = mid+1;
            }
            else{
                ans = min(nums[mid], ans);
                high = mid-1;
            }
        }return ans;
    }
};
//TC: O(logN) 
//SC: O(1)

//QUESTION 3: Search in rotated sorted array
//https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]==target)return mid;

            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target<=nums[mid])high = mid-1;
                else low = mid+1;
            }
            else{
                if(nums[mid]<=target && target<=nums[high])low = mid+1;
                else high = mid-1;
            }
        }
        return -1;
    }
};
//TC: O(logN)
//SC: O(1)
