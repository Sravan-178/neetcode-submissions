#include<cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        string b;
    for(char ch:s){
        if(isalnum(ch)){
            a.push_back(tolower(ch));
            b=char(tolower(ch))+b;
        }
        
    }
    if(a==b){
        return true;
    }
    else return false;
    }
};
