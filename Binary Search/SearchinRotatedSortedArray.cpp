class Solution {
public:
    int findPivot(vector<int> nums){
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;

        while(s<e){
            // if(mid<e && nums[mid]>nums[mid+1]){
            //     return mid;
            // }
            // if(mid>s && nums[mid-1]>nums[mid]){
            //     return mid-1;
            // }

            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
    }

    int binarySearch(vector<int> nums,int target,int s,int e){
        int start=s;
        int end=e;
        int mid=start+(end-start)/2;

        while(start<=end){
            int element=nums[mid];
            if(element==target){
                return mid;
            }
            else if(target<element){
                //left
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
       int pivot=findPivot(nums);
       int n=nums.size();
       if(target>=nums[pivot] && target<=nums[n-1]){
        return binarySearch(nums,target,pivot,n-1);
       }
       else{
        return binarySearch(nums,target,0,pivot-1);
       }
       return -1;
    }
};
