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
    int diameterOfBinaryTree(TreeNode* root) {
        unordered_map<TreeNode*,pair<int,int>> mp;
        mp[nullptr]={0,0};
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* head=st.top();
            if(head->left && mp[head->left].first==0){
                st.push(head->left);
            }
            else if(head->right && mp[head->right].first==0){
                st.push(head->right);
            }
            else{
                st.pop();
                auto [leftheight,leftdiameter] = mp[head->left];
                auto [rightheight,rightdiameter] = mp[head->right];
                int height=max(leftheight,rightheight)+1;
                int diameter = max(leftheight+rightheight,max(leftdiameter,rightdiameter));
                mp[head]={height,diameter};
            }
            //return mp[root].second;
        }
        return mp[root].second;
    }
};
