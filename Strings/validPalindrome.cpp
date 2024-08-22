class Solution {
public:
    bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return true;
        }
        return false;
    }

    char toLowerCase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return ch;
        }
        else{
            char temp=ch-'A'+'a';
            return temp;
        }
    }

    bool checkPalindrome(string a){
        int s=0;
        int e=a.length()-1;

        while(s<=e){
            if(a[s]!=a[e]){
                return false;
            }
            else{
                s++;
                e--;
            }
        }
        return true;
    }

    

    bool isPalindrome(string s) {
        //faltu characters hatayenge
        string temp="";

        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }

        //lowercase me kardo
        for(int i=0;i<temp.length();i++){
            temp[i]=toLowerCase(temp[i]);
        }

        //check palindrome
        return checkPalindrome(temp);
    }
};
