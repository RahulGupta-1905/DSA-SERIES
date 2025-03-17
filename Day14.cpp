Ques 1
class Solution {
  public:
    int floorSqrt(int n) {
        int low=0;
        int high=n;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid*mid<=n){
                ans=mid;
                low=mid+1;
                
            }
            else 
            high=mid-1;
        }
        return ans;
    }
};
//TC= O(logn)
//SC=O(1)

Ques 2
class Solution {
public:
int maximumele(vector<int> & arr){
    int maxi=INT_MIN;
    for(int i=0; i<arr.size(); i++){
        maxi=max(arr[i], maxi);
    }
    return maxi;
}
long long totaltime(vector<int> & arr, long long hourly){
    long long totalh=0;
    for(int i=0; i<arr.size(); i++){
        totalh+=ceil((double)arr[i]/(double)hourly);
    }
    return totalh;
}
    int minEatingSpeed(vector<int>& arr, int h) {
        if(arr.empty()) return 0;
        int start=1;
        int end=maximumele(arr);
        while(start<=end){
            int mid=start+(end-start)/2;
            long long timetaken=totaltime(arr, mid);
            if(timetaken<=h)
            end=mid-1;
            else 
            start=mid+1;
    }
    return start;
        
    }
};
//TC= O(nlogn)
//SC=O(1)

Ques 3 
class Solution {
public:
   int maxelement(vector<int> & nums){
    int maxi=INT_MIN;
    for(int i=0; i<nums.size(); i++){
        maxi=max(nums[i],maxi);
    }
    return maxi;
   }
   
   int sum(vector<int> &arr, int start, int end, int element){
    int sum=0;
    for(int i=start; i<=end;i++){
        sum+=(arr[i]+element-1)/element;
    }
    return sum;
   }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int ans=-1;
        int start=1;
        int end=maxelement(nums);
        while(start<=end){
            int mid=start+(end-start)/2;
            int result=sum(nums,0,n-1,mid);
            if(result<=threshold){
                ans=mid;
                end=mid-1;

            }
            else
            start=mid+1;

        }
        return ans;
        
    }
};
//TC= O(nlogn)
//SC=O(1)
