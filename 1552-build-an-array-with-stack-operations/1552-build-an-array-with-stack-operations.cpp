class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        string push = "Push",pop = "Pop";
        vector<string>res;
        for(int i = 1,j = 0;i<=n && j < target.size();i++){
            if(i == target[j]){
                res.push_back(push);
                j++;
            }
            else{
                res.push_back(push);
                res.push_back(pop);
            }
        }
        return res;
    }
};