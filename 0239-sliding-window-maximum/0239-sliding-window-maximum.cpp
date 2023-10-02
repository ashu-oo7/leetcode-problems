class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       multiset<int,greater<int>>st;
       vector<int>res;
       for(int i = 0;i<k;i++){
           st.insert(nums[i]);
       }
       res.push_back((*(st.begin())));
       for(int i = k,j = 0;i<nums.size();i++,j++){
           st.erase(st.find(nums[j]));
           st.insert(nums[i]);
           res.push_back((*(st.begin())));
       }
       return res;
    }
};