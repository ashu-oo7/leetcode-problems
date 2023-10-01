class Solution {
public:
    string reverseWords(string s) {
        string ans = "",temp = "";
        for(int i = 0;i<s.length();i++){
            if(s[i] == ' '){
                ans = ans + temp + ' ';
                temp = "";
            }
            else
                temp = s[i] + temp;
        }
        ans = ans + temp;
        return ans;
    }
};