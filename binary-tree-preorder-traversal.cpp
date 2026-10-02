class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> s;
        TreeNode* i = root;

        while (i != nullptr || !s.empty()) {
            while (i != nullptr) {
                result.push_back(i->val);
                s.push(i);
                i = i->left;
            }

            i = s.top();
            s.pop();

            i = i->right;
        }   

        return result;
    }
};
