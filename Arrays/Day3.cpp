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
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr{1,2,3,3,4,6,8};
    vector<int> brr{3,3,4,10};
    
    vector<int> ans;
    
    //outer loop
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        //for every element , run loop on brr
        for(int j=0;j<brr.size();j++){
            if(element==brr[j]){
                //flag or mark
                brr[j]=-1;
                ans.push_back(element);
            }
        }
    }
    
    //print ans
    for(auto value : ans){
        cout<<value<<" ";
    }
    return 0;
}
