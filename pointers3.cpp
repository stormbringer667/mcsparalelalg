#include <iostream>
#include <vector>
using namespace std;
struct MTreeNode {
    int val;
    vector<MTreeNode*> children;
    MTreeNode(int v) : val(v) {}
};
int mTreeDepth(MTreeNode* root) {
    if (!root) return 0;
    int maxDepth = 0;
    for (MTreeNode* child : root->children)
        maxDepth = max(maxDepth, mTreeDepth(child));
    return 1 + maxDepth;
}
int main() {
    MTreeNode* root = new MTreeNode(1);
    root->children = { new MTreeNode(2), new MTreeNode(3) };
    root->children[0]->children = { new MTreeNode(4), new MTreeNode(5) };
    cout << "M-Tree Depth: " << mTreeDepth(root) << endl;
}
