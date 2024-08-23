// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void func(int &a){
    a++;
    cout<<"Inside function: "<<a<<endl;
}


int main() {
    // int num=7;
    // cout<<&num<<endl; //address of num
    // int *p=&num;
    // cout<<p<<endl; //print p
    // cout<<*p<<endl; //dereference operator
    
    // int a=5;
    // func(a);
    // cout<<"Main function: "<<a<<endl;
    
    // int num=5;   
    // // num=num+1;
    // // cout<<num<<endl;
    // int *ptr=&num;
    // // *ptr=*ptr+1;
    // // cout<<num<<endl;
    // cout<<"int"<<endl;
    // cout<<sizeof(num)<<endl;
    // cout<<sizeof(ptr)<<endl;
    
    // char ch='a';
    // char *p=&ch;
    // cout<<"char"<<endl;
    // cout<<sizeof(ch)<<endl;
    // cout<<sizeof(p)<<endl;
    
    // double d=1.12;
    // double *p2=&d;
    // cout<<"Double"<<endl;
    // cout<<sizeof(d)<<endl;
    // cout<<sizeof(p2)<<endl;
    
    // int i=5;
    // int *ptr=0;
    // ptr=&i;
    // cout<<ptr<<endl;
    
    // int num=5;
    // int *p=&num;
    // int a=*p;
    // *p=*p+1;
    // cout<<num<<endl;
    
    //copy pointer
    // int num=5;
    // int *p=&num;
    // int *q=p;
    // cout<<p<<" "<<q<<endl;
    // cout<<*p<<" "<<*q;
    
    //arithmetic operation using pointers
    int i=3;
    int *ptr=&i;
    *ptr=*ptr+1;
    cout<<*ptr<<endl;
    cout<<"before operation"<<ptr<<endl;
    ptr=ptr+1;
    cout<<"after operation"<<ptr<<endl;
    
    
    return 0;
}
