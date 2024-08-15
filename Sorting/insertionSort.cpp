#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    //rounds 1-> n-1
    for(int i=1;i<n;i++){
      int element=arr[i];
      int j=i-1;
      for(;j>=0;j--){
        if(arr[j]>element){
          //shift
          arr[j+1]=arr[j];
        }
        else{
          //ruk jao stop
          break;
        }
      }
      //copy element value
      arr[j+1]=element;
    }
}
