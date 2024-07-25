// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    for(int row=0;row<n;row=row+1){
        //spaces
        for(int col=0;col<n-row-1;col=col+1){
            cout<<" ";
        }
        
        //stars
        for(int col=0;col<2*row+1;col=col+1){
            //if first charcter or if last character print *
            if(col==0 || col==2*row){
                //first character
                cout<<"*";
            }
            else{
                cout<< " ";
            }
        }
        cout<<endl;
    }
    
    //inverted
    for(int row=0;row<n;row=row+1){
        //spaces
        for(int col=0;col<row;col=col+1){
            cout<<" ";
        }
        
        //stars
        for(int col=0;col<2*n-2*row-1;col=col+1){
            //if first charcter or if last character print *
            if(col==0){
                //first character
                cout<<"*";
            }
            else if(col==2*n-2*row-2){
                //last character
                cout<<"*";
            }
            else{
                cout<< " ";
            }
        }
        cout<<endl;
    }

    return 0;
}
