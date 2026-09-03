#include <iostream>
#include <map>
#include <string>

using namespace std;

class Solution{
public:
    void longestCommonPrefix(vector<string>& strs){
        unordered_map<string, int> hash;
        for(int c = 1; c <= strs[0].length(); c++){
            int i = 0;
            for(; i < strs.size(); i++){
                // cout << "weare in word " << strs[i] << ' ';
                // cout << strs[i].substr(0,c) << ' ';
                if(strs[i].substr(0, c).size() == c)
                    hash[strs[i].substr(0, c)] += 1;
                if(hash[strs[i].substr(0, c)] == 1 && i != 0){
                    break;
                }
                // cout << '\n';
            }
            // cout << '\n';

            // if(hash[strs[i].substr(0, c)] == 1 && i != 0){
            //     break;
            // }
        }

        for (auto& [key, val] : hash){
            cout << key << ' ' << val << '\n';
        }

        int max = 0;
        string answer="";
        for(auto& [key, val] : hash){
            // cout << key << ' ' << val<< '\n';
            // cout << "bebe" << max << ' ' << answer << '\n';
            if(key.size() >= max && val >= strs.size()){
                max = key.size();
                answer = key;
            }
        }

        cout << answer << '\n';

        // return answer;
    }
};

int main(){
    Solution sol;

    vector<string> strs {"ab", "a"};
    sol.longestCommonPrefix(strs);
    // cout << '"' << sol.longestCommonPrefix(strs) << '"' << '\n';
}