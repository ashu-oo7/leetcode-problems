class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        int res = nums[0];
        deque<pair<int,int>>dq;
        dq.push_back({res,0});
        for(int i = 1;i<nums.size();i++){
            int idx = dq.front().second;
            if(idx < (i-k))dq.pop_front();
            int val = dq.front().first;
            int ans = nums[i];
            if(val > 0) ans += val;
            res = max(res,ans);
            while((!dq.empty()) && ans > dq.back().first){
                dq.pop_back();
            }
          //  cout<<ans<<" "<<i<<endl;
            dq.push_back({ans,i});
        }
        return res;
    }
};