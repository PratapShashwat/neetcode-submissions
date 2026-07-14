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
            if(temphead->left!=nullptr && temphead->right!=nullptr){
                swap(temphead->left,temphead->right);
            }
            else if(temphead->left){temphead->right=temphead->left;temphead->left=nullptr;}
            else {temphead->left=temphead->right;temphead->right=nullptr;}
            st.push(temphead->left);
            st.push(temphead->right);
        }
        return root;
    }
};
