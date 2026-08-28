/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    map<TreeNode*, TreeNode*>parent;
    void dfs(TreeNode* root, TreeNode* par){
        if(root==NULL) return;
        parent[root]=par;
        dfs(root->left, root);
        dfs(root->right, root);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        dfs(root,NULL);
        vector<TreeNode*>ancestorP;
        vector<TreeNode*>ancestorQ;
        TreeNode* currP=p;
        while(currP!=NULL){
            ancestorP.push_back(currP);
            currP=parent[currP];
        }
        TreeNode* currQ=q;
        while(currQ!=NULL){
            ancestorQ.push_back(currQ);
            currQ=parent[currQ];
        }
        TreeNode* ans=NULL;
        int i=ancestorP.size()-1;
        int j=ancestorQ.size()-1;
        while(
            i>=0 && j>=0 &&
            ancestorP[i]==ancestorQ[j]){
                ans=ancestorP[i];
                i--,j--;
        }
        return ans;
    }
};