// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int factorial(int n){
    cout<<"Function is called for n: "<<n<<endl;
    
    //base case
    if(n==1){
        return 1;
    }
    int chhotiproblem=factorial(n-1);
    int badiproblem=n*chhotiproblem;
    return badiproblem;
}

int main() {
    int n;
    cout<<"ENter the value of n "<<endl;
    cin>>n;
    
    int ans=factorial(n);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}
