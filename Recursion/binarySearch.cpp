// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int binarySearch(vector<int> v,int s,int e,int key){
    //case 1-> key not found
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    //case 2-> key is found
    if(v[mid]==key){
        return mid;
    }
    
    //arr[mid]<key->right mein search
    if(v[mid]<key){
        return binarySearch(v,mid+1,e,key);
    }
    else{
        return binarySearch(v,s,mid-1,key);
    }
}

int main() {
    vector<int> v{10,20,30,40,50,60,99};
    int n=v.size();
    int key=100;
    int s=0;
    int e=n-1;
    int ans=binarySearch(v,s,e,key);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}
