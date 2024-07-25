// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    //full pyramid
    for(int row=0;row<n;row=row+1){
        //space
        for(int col=0;col<n-row-1;col=col+1){
            cout<<" ";
        }
        
        //star
        for(int col=0;col<row+1;col=col+1){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    //inverted full pyramid
    for(int row=0;row<n;row=row+1){
        //space
        for(int col=0;col<row;col=col+1){
            cout<<" ";
        }
        
        //star
        for(int col=0;col<n-row;col=col+1){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
