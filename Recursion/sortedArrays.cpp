// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

bool checkSort(vector<int> &v,int& n,int i){
    //base case
    if(i==n-1){
        return true;
    }
    
    //1 case solve krna h
    if(v[i+1]<=v[i]){
        return false;
    }
    
    //baki recursion sambhal lega
    return checkSort(v,n,i+1);
}

int main() {
    vector<int> v{10,20,30,40,70,60};
    int n=v.size();
    int i=0;
    bool isSorted=checkSort(v,n,i);
    if(isSorted){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorrted"<<endl;
    }
    return 0;
}
