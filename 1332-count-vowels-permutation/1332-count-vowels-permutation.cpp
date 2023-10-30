class Solution {
public:
    int countVowelPermutation(int n) {
    int mod = 1e9 + 7;
      long long count_a = 1,count_e =1,count_i = 1,count_o = 1,count_u = 1;
      for(int i = 2;i<=n;i++){
          long long ta = count_a,te = count_e,ti = count_i,to = count_o,tu = count_u;
          count_e = (ta +ti)%mod ;
          count_a = (te + ti + tu)%mod;
          count_i = (te + to)%mod;
          count_o = (ti)%mod;
          count_u =  (ti + to)%mod;
      }
      return (count_a + count_e + count_i + count_o + count_u)%mod;
    }
};