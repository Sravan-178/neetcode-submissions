class Solution {
public:
    bool isAnagram(string s, string t) {
        int count=0;
        if(s.size()!=t.size()){
            return false;
        }
        else{
       unordered_map<char,int> mpp1,mpp2;
        for(int i=0;i<s.size();i++){
            mpp1[s[i]]++;
            mpp2[t[i]]++;
        }
        if(mpp1==mpp2){
            return true;
        }
        else{
            return false;
        }
        

    }}
};
