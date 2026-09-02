#include <vector>
#include <iostream>

using namespace std;

class Solution{ 
    public:
        bool uniformArray(vector<int>& nums1){
            return true;
        }
};

int main(){
    Solution sol;
    vector<int> num {2,4,6,8};

    cout << (sol.uniformArray(num) ? "true" : "false") << '\n';

    return 0;
}