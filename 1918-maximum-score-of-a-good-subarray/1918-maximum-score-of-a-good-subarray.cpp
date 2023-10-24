class Solution {
public:
    int maximumScore(std::vector<int>& nums, int k) {
       int res = nums[k],n = nums.size(),val = nums[k],sz = 1;
       for(int i = k-1,j = k+1;i>=0 || j < n;){
           if(i >= 0 && j < n){
               if(nums[i] > nums[j]){
                   val = min(val,nums[i]);
                   i--;
               }
               else{
                   val = min(val,nums[j]);
                   j++;
               }
           }
           else if(i >= 0){
                 val = min(val,nums[i]);
                   i--;
           }
           else{
                val = min(val,nums[j]);
                j++;
           }
           res = max(res,val*(++sz));
       }
       return res;
    }
};