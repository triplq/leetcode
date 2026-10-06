class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        stack<Node*> s;
        if (!root)
            return result;

        s.push(root);

        while (!s.empty()) {
            Node* current = s.top();

            result.push_back(current->val);
            s.pop();

            for (int i = current->children.size() - 1; i >= 0; i--) {
                s.push(current->children[i]);
            }
        }

        return result;
    }
};
