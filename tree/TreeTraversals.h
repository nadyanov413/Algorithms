#include "tree.h"
#include <queue>

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

    void level_order(TreeNode* node){
        queue<TreeNode*> q;

        if(node != NULL){
            q.push(node);
        }
        
        while(!q.empty()){
            TreeNode* topNode = q.front();
            topNode->visit();

            if(node->left != NULL){
                q.push(topNode->left);   
            }
            if(node->right != NULL){
                q.push(topNode->right);
            }

            q.pop();
        }
    }
};