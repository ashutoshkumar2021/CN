// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // int arr[10]={10,20,30,40};
    // cout<<"Address of first memory block is "<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<"Adrress of first memory block is "<<&arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<arr+1<<endl;
    // cout<<arr[3]<<endl;
    // cout<<*(arr+3)<<endl;
    // cout<<"New way"<<endl;
    // int i=3;
    // cout<<3[arr]<<endl;
    
    // int temp[10];
    // cout<<sizeof(temp)<<endl;
    // cout<<"param"<<endl;
    // cout<<sizeof(*temp)<<endl;
    // cout<<sizeof(&temp)<<endl;
    
    // int *ptr=&temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;
    
    // int a[50]={1,2,3,4};
    // cout<<&a[0]<<endl; 
    // cout<<&a<<endl;
    // cout<<a<<endl;
    
    int arr[10];
    //error
    //arr=arr+1;
    
    int *ptr=&arr[0];
    cout<<"before"<<ptr<<endl;
    ptr=ptr+1;
    cout<<"after"<<ptr<<endl;
    
    
    return 0;
}
