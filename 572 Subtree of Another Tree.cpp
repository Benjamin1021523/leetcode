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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!t)
            return true;
        if(!s)
            return false;

        if(s->val == t->val){
            return equal(s, t) | isSubtree(s->left, t) | isSubtree(s->right, t);
        }
        return isSubtree(s->left, t) | isSubtree(s->right, t);
    }
private:
    bool equal(TreeNode* s, TreeNode* t){
        if(!s && !t)
            return true;
        if(!s || !t)
            return false;

        if(s->val == t->val){
            return equal(s->left, t->left) & equal(s->right, t->right);
        }
        return false;
    }
};