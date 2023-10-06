class Solution {
public:
    int integerBreak(int n) {
       vector<int>arr(n+1,1);
       for(int i = 2;i<=n;i++){
           int res = i-1;
           for(int j = 1;j<=i/2;j++){
               int v1 = max(j,arr[j]);
               int v2 = max(i-j,arr[i-j]);
               int val = v1*v2;
               res = max(res,val);
           }
           arr[i] = res;
           //cout<<i<<" "<<arr[i]<<endl;
       }
       return arr[n];
    }
};