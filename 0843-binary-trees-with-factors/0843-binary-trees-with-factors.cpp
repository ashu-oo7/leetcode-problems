class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int mod = 1000000007;
        map<int,int>mp;
        int n = arr.size();
        int res = 0;
        sort(arr.begin(),arr.end());
        for(int i = 0;i<arr.size();i++){
            mp[arr[i]] = i;
        }
        vector<long long>dp(n,1);
        for(int i = 1;i<n;i++){
            int val = arr[i];
            for(int j = i-1;j>= 0;j--){
                int a = arr[j],b = val/a;
                if(mp.find(b) == mp.end() || val%a > 0 || b > a)continue;
                // cout<<a<<" "<<b<<" "<<val<<endl;
                // cout<<"mp of b is "<<mp[b]<<endl;
                // cout<<"dp is "<<dp[j]<<" "<<dp[mp[b]]<<endl;
                if(a == b)
                    dp[i] += (dp[j]*1LL*dp[mp[b]])%mod;
                else
                    dp[i] += (2LL*dp[j]*dp[mp[b]])%mod;
            }
        }
        for(int i = 0;i<n;i++){
            // cout<<arr[i] <<" "<<dp[i]<<endl;
            res = (res*1LL + dp[i]*1LL)%mod;
        }
        return res;
    }
};