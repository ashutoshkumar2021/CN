// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}4

void update(int *p){
    *p=*p+1;
    cout<<"Inside function"<<*p<<endl;
}
int getSum(int arr[],int n){
    cout<<endl<<"Size :"<< sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main() {
    // int value=5;
    // int *p=&value;
    
    // // print(p);
    // cout<<"Before "<<*p<<endl;
    // update(p);
    // cout<<"After "<<*p<<endl;
    
    int arr[]={1,2,3,4,5,7};
    cout<<getSum(arr+3,3);

    return 0;
}
