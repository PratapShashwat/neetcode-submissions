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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> st;
        st.push(root);
        int depth=0;
        if(root==nullptr)return 0;
        while(!st.empty()){
            int n=st.size();
            for(int i=0;i<n;i++){
            TreeNode* temp=st.front();
            st.pop();
            if(temp->left!=nullptr)st.push(temp->left);
            if(temp->right!=nullptr)st.push(temp->right);
            }
            depth++;
        }
        return depth;
    }
};
