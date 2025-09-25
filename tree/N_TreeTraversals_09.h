#include "tree.h"
#include <queue>

class TreeTraverals{
    public:
    void pre_Order(TreeNode* node){
        if(node == NULL){
            return;
        }
        node->visit();
        pre_Order(node->left);
        pre_Order(node->right);
    }
    void in_Order(TreeNode* node){
        if(node == NULL){
            return;
        }
        in_Order(node->left);
        node->visit();
        in_Order(node->right);
    }
    void post_Order(TreeNode* node){
        if(node == NULL){
            return;
        }
        post_Order(node->left);
        post_Order(node->right);
        node->visit();

    }
    void level_Order(TreeNode* node){
        queue<TreeNode*> q;
        if(node != NULL){
            q.push(node);
        }
        while(!q.empty()){
            TreeNode* topNode = q.front();
            if(node->left == NULL){
                q.push(node->left);
            }
            if(node->right == NULL){
                q.push(node->right);
            }
            q.pop();
        }

    }
};