/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int>res;
        if(root == NULL)return res;
        unordered_map<int,int>mp;
        queue<pair<TreeNode*,int> >q;
        int idx;
        q.push({root,0});
        while(!q.empty()){
            TreeNode* temp = q.front().first;idx = q.front().second;
            q.pop();
            if(temp ->left != NULL)
            q.push({temp->left,idx+1});
             if(temp ->right != NULL)
            q.push({temp->right,idx+1});
            int val = temp->val;
            if(mp.find(idx) == mp.end())
                mp[idx] = val;
            else
                mp[idx] = max(val,mp[idx]);
        }
        res = vector<int>(idx+1);
        for(auto &i:mp){
            int value = i.second,idx = i.first;
            res[idx] = value;
        }
        return res;
    }
};