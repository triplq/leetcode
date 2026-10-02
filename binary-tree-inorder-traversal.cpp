class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> s;
        TreeNode *i = root;

        while(i != nullptr || !s.empty()) {
            while (i != nullptr) {
                s.push(i);
                i = i->left;
            }

            i = s.top();
            s.pop();
            result.push_back(i->val);

            i = i->right;
        }

        return result;
    }
};
