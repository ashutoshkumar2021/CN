// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void update(int **ptr2){
    //ptr2=ptr2+1;
    //kuch change hoga- No
    
    //*ptr2=*ptr2+1;
    //kuch change hoga - YES
    
    **ptr2=**ptr2+1;
    //kuch change Hoga -YES
}

int main() {
    int i=7;
    int *ptr1=&i;
    int **ptr2=&ptr1;
    cout<<"before "<<i<<endl;
    cout<<"before "<<ptr1<<endl;
    cout<<"Before "<<ptr2<<endl;
    update(ptr2);
    cout<<"After "<<i<<endl;
    cout<<"After "<<ptr1<<endl;
    cout<<"After "<<ptr2<<endl;
    
    // cout<<"ok"<<endl;
    
    // cout<<"print ptr1 "<<ptr1<<endl;
    // cout<<"Address of ptr1"<<&ptr1<<endl;
    
    // cout<<*ptr2<<endl;
    
    // cout<<i<<endl; //7
    // cout<< *ptr1<<endl; //7
    // cout<< **ptr2<<endl; //7
    
    // cout<<&i<<endl; //address of i
    // cout<<ptr1<<endl; //address of i
    // cout<<*ptr2<<endl; //address of i
    
    // cout<<&ptr1<<endl; //adreess of ptr1
    // cout<<ptr2<<endl;  //address of ptr1

    return 0;
}
