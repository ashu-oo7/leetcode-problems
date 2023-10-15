class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0,mn = nums[0],csum = 0;
        for(int i = 0;i<nums.size();i++){
            csum += nums[i];
            if(csum < 0)
                csum = 0;
            else
                sum = max(sum,csum);
            mn = max(mn,nums[i]);
        }
        if(sum == 0)return mn;
        return sum;
    }
};