#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    
    for(int i=1;i<n;i++){
        //rounds 1 to n-1
        bool swapped=false;
        //j =n-i
        for(int j=0;j<n-i;j++){
            //process elements till n-ith index
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }

        if(swapped==false){
            //already sorted
            break;
        }
    }
}
