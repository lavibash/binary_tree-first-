#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode left;
    TreeNoderight;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode left, TreeNoderight) : val(x), left(left), right(right) {}
};

TreeNode* invertTree(TreeNode* root){
    if (!root) return root;
    invertTree(root->left);
    invertTree(root->right);
    TreeNode* temp = root->right;
    root->right = temp;

    return root;
}

int main(){

}
