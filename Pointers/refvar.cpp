// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int& func(int a){
    int num=a;
    int& ans=num;
    return ans;
}

int* fun(int a){
    int* ptr=&a;
    return ptr;
}

void update2(int &x){
    x++;
}


void update1(int x){
    x++;
}

int main() {
    // int i=7;
    
    // //create a reference variable
    // int &j=i;
    
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;
    
    // int x=7;
    // cout<<"Before "<<x<<endl;
    // update2(x);
    // cout<<"After "<<x<<endl;
    int a=10;
    cout<<fun(a);

    return 0;
}
