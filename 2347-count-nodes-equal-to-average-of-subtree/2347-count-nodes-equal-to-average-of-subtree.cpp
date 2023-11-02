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
    int res;
    pair<int,int> solve(TreeNode* root){
        if(root == NULL){
            return {0,0};
        }
        else{
            pair<int,int>l = solve(root->left);
            pair<int,int>r = solve(root->right);
            int sum = l.first + r.first + root->val;
            int node = l.second + r.second + 1;
            int avg = (sum*1.0)/node;
            if(avg == root->val){
                cout<<root->val<<endl;
                res++;
            }
            return {sum,node};
        }
    }
    int averageOfSubtree(TreeNode* root) {
        res = 0;
        pair<int,int> temp = solve(root);
        return res;
    }
};