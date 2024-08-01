//Union of two arrays

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[]={1,2,3,7,9};
    int sizea=5;
    int brr[]={2,4,6,8};
    int sizeb=4;
    
    //create an ans vector
    vector<int> ans;
    
    //push all the element of arr
    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);
    }
    
    //push all the element of brr
    for(int i=0;i<sizeb;i++){
        ans.push_back(brr[i]);
    }
    
    
    //print ans
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

//Intersection of two arrays

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr{1,2,3,3,4,6,8};
    vector<int> brr{3,3,4,10};
    
    vector<int> ans;
    
    //outer loop
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        //for every element , run loop on brr
        for(int j=0;j<brr.size();j++){
            if(element==brr[j]){
                //flag or mark
                brr[j]=-1;
                ans.push_back(element);
            }
        }
    }
    
    //print ans
    for(auto value : ans){
        cout<<value<<" ";
    }
    return 0;
}

//Unique number in an array

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};

//Two sum/ Pair sum Problem


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};
