// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

char tolowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverseString(char name[],int n){
    int s=0;
    int e=n-1;
     
    while(s<=e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}

bool IsPalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    
    while(s<=e){
        if(tolowerCase(a[s])!=tolowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main() {
    // char name[20];
    // cout<<"Enter your name: "<<endl;
    // cin>>name;
    
    // // name[2]='\0';
    
    
    // cout<<"Your name is ";
    // cout<<name<<endl;
    
    
    
    
    
    // // for(int i=0;i<20;i++){
    // //     cout<<name[i]<<" ";
    // // }
    // int len=getLength(name);
    // cout<<"Length is: "<<len<<endl;
    
    // reverseString(name,len);
    // cout<<"reverse name is :"<<name<<endl;
    
    // cout<<IsPalindrome(name,len);
    
    string str;
    cin>>str;
    cout<<str<<endl;
    cout<<str.length()<<endl;
    str.push_back('k');
    cout<<str<<endl;
    str.pop_back();
      cout<<str<<endl;
    // return 0;
}
