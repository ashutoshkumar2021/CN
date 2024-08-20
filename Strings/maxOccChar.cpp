#include <iostream>
#include <string>
#include <climits>
using namespace std;

char getMaxOccChar(string s){
    int arr[26]={0};
    
    //create an array of count of characters (store)
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        //lowercase
        int number=0;
        if(ch>='a' && ch<='z'){
            number=ch-'a';
        }
        //Uppercase
        else{
            number=ch-'A';
        }
        arr[number]++;
    }
    int maxi=INT_MIN;
    int ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalAns='a'+ans;
    return finalAns;
}

int main()
{
    string str;
    cin>>str;
    cout<<getMaxOccChar(str);

    return 0;
}
