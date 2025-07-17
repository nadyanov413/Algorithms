#include "tree.h"

class TreeTraversals{
    public:
    void pre_order(TreeNode* node){
        if(node == NULL){
            return;
        }
        node->visit();
        pre_order(node->left);
        pre_order(node->right); 
    }

    void in_order(TreeNode* node){
        if(node == NULL){
            return;
        }
        in_order(node->left);
        node->visit();
        in_order(node->right);

    }
    void post_order(TreeNode* node){
        if(node == NULL){
            return;
        }
        post_order(node->left);
        post_order(node->right);
        node->visit();
    }
};