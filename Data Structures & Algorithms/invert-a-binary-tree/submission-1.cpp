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
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> st;
        st.push(root);
        while(st.empty()==false){
            TreeNode* temphead=st.top();
            st.pop();
            if (temphead==nullptr)continue;
            
                swap(temphead->left,temphead->right);
            if(temphead->left)st.push(temphead->left);
            if(temphead->right)st.push(temphead->right);
        }
        return root;
    }
};
