#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    
    int mid=start+(end-start)/2;
    
    while(start<=end){
        int element=arr[mid];
        
        if(element==target){
            return mid;
        }
        else if(target<element){
            //search in left
            end=mid-1;
        }
        else{
            //seach in right
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int arr[]={2,4,6,8,10,13,16};
    int size=7;
    int target=8;
    
    int indexoftarget=binarySearch(arr,size,target);
    
    if(indexoftarget==-1){
        cout<<"Not found"<<indexoftarget<<endl;
    }
    else{
        cout<<"Found"<<indexoftarget<<endl;
    }
}


//next code 
#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr,int target){
    int s=0;
    int e=arr.size()-1;
    
    int mid=s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(arr[mid]==target){
            //ans store and then left
            ans=mid;
            e=mid-1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    
}
int lastOcc(vector<int> arr,int target){
    int s=0;
    int e=arr.size()-1;
    
    int mid=s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(arr[mid]==target){
            //ans store and then left
            ans=mid;
            s=mid+1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    
}
int main(){
    vector<int> v{1,3,4,4,4,4,6,7};
    int target=4;
    int indexOffirst=firstOcc(v,target);
    int indexOflast=lastOcc(v,target);
    
    cout<<"ans first is"<<indexOffirst;
     cout<<"ans last is"<<indexOflast;
}
