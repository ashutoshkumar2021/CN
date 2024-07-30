#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void inc(int arr[],int size){
  arr[0]=arr[0]+10;
  printArray(arr,size);
}

bool find(int arr[],int size,int key){
  //linear search
  for(int i=0;i<size;i++){
    if(arr[i]==key){
      //print
      cout<<i<<endl;
      return true;
    }
  }
  //not present
  return false;
  
}

int main() {
  // int arr[]={5,6};
  // int size=2;
  // inc(arr,size);
  // printArray(arr,size);

  // int arr[5]={1,3,5,7,9};
  // int size=5;

  // cout<<"Enter the key to find"<<endl;
  // int key;
  // cin>>key;

  // if(find(arr,size,key)){
  //   cout<<"Found"<<endl;
  // }
  // else{
  //   cout<<"Not Found"<<endl;
  // }
  // int arr[]={0,1,1,1,0,0,0,0,1,0,1,0,1,0,1,2,3,5};
  // int size=15;
  // int numZero=0;
  // int numOne=0;

  // for(int i=0;i<size;i++){
  //   //if zero found,increment numZero
  //   if(arr[i]==0){
  //     numZero++;
  //   }
  //   //if onr found,increment numOne
  //   if(arr[i]==1){
  //     numOne++;
  //   }
  // }

  // cout<<"Number of Zeroes "<<numZero<<endl;
  // cout<<"Number of Ones "<<numOne<<endl;
  int arr[6]={10,20,30,40,50,60};
  int size=6;
  // int maxNum=INT_MIN;

  // for(int i=0;i<size;i++){
  //   if(arr[i]>maxNum){
  //     maxNum=arr[i];
  //   }
  // }
  // cout<<maxNum<<endl;
  // int start=0;
  // int end=size-1;

  // while(start<=end){
  //   if(start==end){
  //     cout<<arr[start]<<" ";
  //   }else{
  //   cout<<arr[start]<<" ";
  //   cout<<arr[end]<<" ";
  //   }
  //   start++;
  //   end--;
  // }

  int start=0;
  int end=size-1;

  while(start<=end){
    //step1: swap
    swap(arr[start],arr[end]);
    //step2: increment start and decrement end
    start++;
    end--;
    
  }
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[5]={10,20,30,40,50};
    int start=0;
    int end=4;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    //create vector
    vector<int> arr;
    cout<<arr.empty()<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    
    //insert
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.pop_back();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr.empty()<<endl;
    

    return 0;
}
