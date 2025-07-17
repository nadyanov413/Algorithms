#include <iostream>
using namespace std;

class TreeNode{
    public:
    
    char value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(char value):TreeNode(value, NULL, NULL){}
    
    TreeNode(char value, TreeNode* left, TreeNode* right): 
        value(value), left(left), right(right){}

    void visit(){
        cout << "Node value" << this->value << endl;
    }
};
