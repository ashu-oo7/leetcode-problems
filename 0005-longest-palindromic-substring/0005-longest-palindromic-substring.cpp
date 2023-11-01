class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<int> >arr(n,vector<int>(n,0));
        for(int i = 0;i<n;i++)
            arr[i][i] = 1;
        int start = 0,end = 0;
        for(int i = 0;i<(n-1);i++){
            if(s[i] == s[i+1]){
                arr[i][i+1] = 1;
                start = i,end = i+1;
            }
        }
        for(int i = 0,j = 2;(i< n)&&(j < n);j++){
            for(int p = i,q = j;(p<n)&&(q<n);p++,q++){
                if(s[p] == s[q] && arr[p+1][q-1]){
                    arr[p][q] = 1;
                   start = p,end = q;
                }
            }
        }
        string ans = "";
        for(int i = start;i<=end;i++)
            ans+=s[i];
        return ans;
    }
};