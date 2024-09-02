// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int fib(int n){
    //base case
    if(n==1){
        //first term
        return 0;
    }
    if(n==2){
        //second tern
        return 1;
    }
    //RR -> f(n)=f(n-1)+f(n-2);
    return fib(n-1)+fib(n-2);
}

int main() {
    int n;
    cin>>n;
    cout<<fib(n);

    return 0;
}
