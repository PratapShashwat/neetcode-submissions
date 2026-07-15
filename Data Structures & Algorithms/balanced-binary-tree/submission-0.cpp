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
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)return true;
        stack<TreeNode*>st;
        unordered_map<TreeNode*,int> mp;
        mp[nullptr]=0;
        st.push(root);
        while(!st.empty()){
            TreeNode* head=st.top();
            if(head->left && mp[head->left]==0){
                st.push(head->left);
            }
            else if(head->right && mp[head->right]==0){
                st.push(head->right);
            }
            else{
                st.pop();
                if(abs(mp[head->left]-mp[head->right])>1)return false;
                else mp[head]=1+max(mp[head->left],mp[head->right]);
            }
        }
        return true;
    }
};
