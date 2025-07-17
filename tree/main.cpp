#include <iostream>
#include "TreeTraversals.h"

using namespace std;

int main(){
    TreeNode *nodeD = new TreeNode('D');
    TreeNode *nodeE = new TreeNode('E');
    TreeNode *nodeB = new TreeNode('B', nodeD, nodeE);
    TreeNode *nodeF = new TreeNode('F');
    TreeNode *nodeG = new TreeNode('G');
    TreeNode *nodeC = new TreeNode('C', nodeF, nodeG);
    TreeNode *root  = new TreeNode('A', nodeB, nodeC);

    TreeTraversals traversal;
    traversal.pre_order(root);
    cout << endl;
    traversal.in_order(root);
    cout << endl;
    traversal.post_order(root);
    cout << endl;
    traversal.level_order(root);
}