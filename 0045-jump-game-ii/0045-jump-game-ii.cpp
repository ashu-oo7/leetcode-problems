class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)return 0;
        int prev = nums[0],curr = 0,ans = 0;
        for(int i = 1;i<nums.size();i++){
            curr = max(curr,nums[i]+i);
            if(i == prev || i == (n-1)){
                ans++;
                prev = curr;
            }
        }
        return ans;
    }
};