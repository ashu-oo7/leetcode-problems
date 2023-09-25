class Solution {
public:
    char findTheDifference(string s, string t) {
         unordered_map<char,int>mp;
        for(int i = 0;i<t.length();i++)
          mp[t[i]]++;
        for(int i = 0;i<s.length();i++)
          mp[s[i]]--;
        for(auto &i:mp){
          char ch = i.first;int val = i.second;
          if(val > 0)return ch;
        }
        return 'a';
    }
};