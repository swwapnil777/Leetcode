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
     vector<int> ans;
     public:
     void Inorder(TreeNode *temp){
         if(!temp){
             return;
         }
         Inorder(temp->left);
         ans.push_back(temp->val);
         Inorder(temp->right);
         
     }
     bool findTarget(TreeNode* root, int k) {
         Inorder(root);
        int i = 0;
        int j = ans.size()-1;
         while(i<j){
            if(ans[i]+ans[j]==k){
                return true;
            }
            else if(ans[i]+ans[j]>k){
                j--;
            }
            else{
                i++;
            }
         }
         return false;
    }
};