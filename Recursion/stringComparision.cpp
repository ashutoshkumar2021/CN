// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
#include <string>
using namespace std;

bool checkKey(string str,int i,int n ,int key){
    //base case
    if(i>=n){
        //key not found
        return false;
    }
    
    //1 case solve krdo
    if(str[i]==key){
        return true;
    }
    
    //baaki recursion dekh lega
    bool ans=checkKey(str,i+1,n,key);
    return ans;
}


int main() {
    string str="CodeNexus";
    int n=str.length();
    
    char key='N';
    
    int i=0;
    bool ans=checkKey(str,i,n,key);
    cout<<"answer is "<<ans<<endl;

    return 0;
}
