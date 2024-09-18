#include <iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    //step1: choose pivotelement
     int pivotIndex=s;
     int pivotelement=arr[s];
    //step2: find right position for pivot element and place it there
     int count=0;
     for (int i=s+1;i<=e;i++){
      if(arr[i]<=pivotelement){
       count++;
      }
     }
     //jab mein Loop se bahar aa jau toh mere paas pivot ka right position mil jayega
     int rightIndex=s+count;
     swap(arr[pivotIndex], arr[rightIndex]);
     pivotIndex=rightIndex;
     
     //step 3: Left me chhote, right mein bade element ko place kr do
     int i=s;
     int j=e;
     while(i<pivotIndex && j>pivotIndex) {
         while(arr[i]<pivotelement) {
            i++;
         }
         while(arr[j] >pivotelement) {
            j--;
         }
         //2 case possible
         //1 case -> you found to element to swap
         //2nd case-> no need to change
         if(i<pivotIndex && j>pivotIndex) {
           swap(arr[i], arr[j]);
         }
    }
    
return pivotIndex;
}

void quickSort (int arr[], int s, int e){
   //base case
   if(s>=e){ 
     return;
   }
   //partition Logic, return pivotIndex
   int p=partition (arr,s,e);
   //recursive calls
   //pivot elements-> Left
   quickSort(arr,s,p-1);
   //pivot elements->right
   quickSort(arr,p+1,e);
}

int main(){
   int arr[]={8,1,3,4,20,50,30};
   int n=7;
   int s=0;
   int e=n-1;
   quickSort(arr,s,e);
   for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
    }
    return 0; 
 }    
