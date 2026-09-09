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
    void helper(TreeNode* root, int target, int sum, vector<vector<int>>&ans, vector<int>&res){
        if(!root) return ;
        sum+=root->val;
        res.push_back(root->val);

        if(!root->left && !root->right && sum==target){
            ans.push_back(res);
        }
        helper(root->left, target, sum, ans, res);
        helper(root->right, target, sum, ans, res);
        res.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>res;
        helper(root, targetSum, 0, ans, res);
        return ans;
    }
};