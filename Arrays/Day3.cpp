#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[]={1,2,3,7,9};
    int sizea=5;
    int brr[]={2,4,6,8};
    int sizeb=4;
    
    //create an ans vector
    vector<int> ans;
    
    //push all the element of arr
    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);
    }
    
    //push all the element of brr
    for(int i=0;i<sizeb;i++){
        ans.push_back(brr[i]);
    }
    
    
    //print ans
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
