class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int &i:nums)
            mp[i]++;
        int count = 0;
        for(auto &i:mp){
            int key = i.first,val = i.second;
            int res = (val * (val-1))/2;
            count += res;
        }
        return count;
    }
};