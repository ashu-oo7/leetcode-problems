class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int>mp;
        for(int i = 0;i<s.length();i++)
            mp[s[i]] = i;
        stack<char>st;
        vector<int>marked(26,0);
        for(int i = 0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
                marked[s[i]-'a'] = 1;
            }
            else if(marked[s[i]- 'a'] == 0){
                while(!st.empty() && (st.top() > s[i] && mp[st.top()] > i)){
                    marked[st.top() - 'a'] = 0;
                    st.pop();
                }
                st.push(s[i]);
                marked[s[i] - 'a'] = 1;
            }
        }
        string res = "";
        while(!st.empty()){
            res = st.top()+res;
            st.pop();
        }
        return res;
    }
};