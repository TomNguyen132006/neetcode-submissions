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
private:
    int pre_idx = 0;
    unordered_map<int, int> inorder_hm;
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        for (int i = 0; i < inorder.size(); i++) {
            inorder_hm[inorder[i]] = i;   
        }
        return dfs(0,preorder.size()-1, preorder);
    }

    TreeNode* dfs(int l,int r, vector<int>& preorder){
        if(l > r){
            return nullptr;
        }

        int root_val = preorder[pre_idx++];
        TreeNode* root = new TreeNode(root_val);
        int mid = inorder_hm[root_val];
        root->left = dfs(l, mid-1, preorder);
        root->right = dfs(mid+1, r, preorder);
        return root;
    }
};
