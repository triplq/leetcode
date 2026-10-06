class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        Node* i = root;  
        stack<Node*> keys;
        unordered_map<Node*, int> hash;

        while (!keys.empty() || i != nullptr) {
            std::cout << "GRAND KEY SIZE CHECK " << keys.size() << " is empty? " << keys.empty() << '\n';
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
            std::cout << "end of loop " << i->val << '\n';

            while (!keys.empty()) {
                i = keys.top();
                hash[i]++;

                std::cout << "in last loop happens " << i->val << ' ' << hash[i] << ' ';

                if (i->children.size() == hash[i]) {
                    std::cout << "we r in that shi " << i->children.size() << ' ' << hash[i] << " and check keys.size " << keys.size() << '\t';
                    keys.pop();
                    hash.erase(i);
                    std::cout << "now check key.size " << keys.size();
                }
                else {
                    std::cout << "break that shi\n";
                    break;
                }
            }
            if (keys.empty())
                i = nullptr;

            std::cout << "last loop ended => going to new cycle\n";
        }

        return result;
    }
};
