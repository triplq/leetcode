class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        Node* i = root;  
        stack<Node*> keys;
        unordered_map<Node*, int> hash;

        while (!keys.empty() || i != nullptr) {
            while (i->children.size() != 0) {
                std::cout << i->val << ' ';
                auto [it, success] = hash.insert({i, 0});

                if (success) {
                    result.push_back(i->val);
                    keys.push(i);
                }
                
                i = i->children[hash[i]];
            }
            result.push_back(i->val);

            while (!keys.empty()) {
                i = keys.top();
                hash[i]++;

                if (i->children.size() == hash[i]) {
                    keys.pop();
                    hash.erase(i);
                }
                else {
                    break;
                }
            }
            if (keys.empty())
                i = nullptr;
        }

        return result;
    }
};
