// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printCounting(int n){
    //base case
    if(n==0){
        return;
    }
    
    //recursive call
    printCounting(n-1);
    
    //processing
    cout<<n<<endl;
}

int main() {
    int n;
    cin>>n;
    
    printCounting(n);

    return 0;
}
