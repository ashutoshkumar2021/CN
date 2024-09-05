// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;

void findmax(int arr[],int n,int i,int &maxi){
    //base case
    if(i>=n){
        //array khtm hogya,poora traverse hogya
        //top vaapis aa jao
        return;
    }
    //1 case solve krna
    
    //current element ko check kro for max
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    //baaki recursion dekh lega
    //recursive relation
    findmax(arr,n,i+1,maxi);
}
void findmin(int arr[],int n,int i,int &mini){
    //base case
    if(i>=n){
        //array khtm hogya,poora traverse hogya
        //top vaapis aa jao
        return;
    }
    //1 case solve krna
    
    //current element ko check kro for max
    if(arr[i]<mini){
        mini=arr[i];
    }
    //baaki recursion dekh lega
    //recursive relation
    findmin(arr,n,i+1,mini);
}

int main() {
   int arr[]={10,20,25,36,64,178,124,40};
   int n=8;
   int i=0;
   int maxi=INT_MIN;
   findmax(arr,n,i,maxi);
   int mini=INT_MAX;
   findmin(arr,n,i,mini);
   cout<<maxi<<endl;
   cout<<mini<<endl;

    return 0;
}
