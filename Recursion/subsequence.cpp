// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printSubsequence(string str, string output,int i){
    //base case
    if(i>=str.size()){
        cout<<output<<endl;
        return;
    }
    
    
    //exclude
    printSubsequence(str,output,i+1);
    
    //include
    //below line is responsible for concatention of output string ith position
    output.push_back(str[i]);
    printSubsequence(str,output,i+1);
   
}

int main() {
    string str="ashu";
    string output="";
    
    int i=0;
    printSubsequence(str,output,i);

    return 0;
}
