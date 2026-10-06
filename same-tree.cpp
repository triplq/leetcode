class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        TreeNode* p_i = p;
        TreeNode* q_i = q;

        stack<TreeNode*> p_s;
        stack<TreeNode*> q_s;


        while (p_i != nullptr || !p_s.empty()) {
            while (p_i != nullptr) {
                if (q_i == nullptr || (q_i != nullptr && q_i->val != p_i->val))
                    return false;
                p_s.push(p_i);
                q_s.push(q_i);

                q_i = q_i->left;
                p_i = p_i->left;
            }

            if (p_i == nullptr && q_i != nullptr)
                return false;

            p_i = p_s.top();
            q_i = q_s.top();

            p_s.pop();
            q_s.pop();

            p_i = p_i->right;
            q_i = q_i->right;
        }
       

        if (p_i == nullptr && q_i != nullptr)
            return false;
        else
            return true;
    }
};
