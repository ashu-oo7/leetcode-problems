class Solution {
public:
    string convert(string s){
        string p = "";int del = 0;
        for(int i = s.length()-1;i>=0;i--){
            if(s[i] == '#')del++;
            else if(del == 0)p = s[i] + p;
            else    del--;
        }
        return p;
    }
    bool backspaceCompare(string s, string t) {
        string s1 = convert(s);
        string s2 = convert(t);
        return s1==s2;
    }
};