#include <iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left, * right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};
int treeDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(treeDepth(root->left), treeDepth(root->right));
}
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    cout << "depth: " << treeDepth(root) << endl;
}
