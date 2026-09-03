#include <iostream>
#include <map>
#include <string>

using namespace std;

class Solution{
public:
    void longestCommonPrefix(vector<string>& strs){
        int min_size = strs[0].size(); int min_i = 0;
        for (int i = 0; i < strs.size(); i++){
            if (strs[i].size() <= min_size){
                min_size = strs[i].size();
                min_i = i;
            }
        }

        int k = 0;
        for(; k < min_size; k++){
            int j = 0;
            for(; j < strs.size(); j++){
                if(j==min_i){
                    continue;
                }
                if(strs[j][k] != strs[min_i][k]){
                    break;
                }
            }
            if(j != strs.size())
                break;
        }

        if(k == 0)
            cout << "";
        else
            cout << strs[min_i].substr(0,k) << '\n';
    }
};

int main(){
    Solution sol;

    vector<string> strs {"flower", "flow", "flight"};
    sol.longestCommonPrefix(strs);
    // cout << '"' << sol.longestCommonPrefix(strs) << '"' << '\n';
}