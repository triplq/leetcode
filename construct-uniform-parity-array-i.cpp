#include <vector>
#include <iostream>

using namespace std;

class Solution{ 
    public:
        bool uniformArray(vector<int>& nums1){
            if (nums1.size() == 1){
                return true;
            }

            vector<int> nums2;
            u_int n = nums1.size();
            for(u_int i = 1; i < n; i++){
                if(nums1[i] % 2 == 0 & nums1[i-1] % 2 != 0 || nums1[i] % 2 != 0 & nums1[i-1] % 2 == 0){
                    continue;
                }else{
                    return true;
                }
            }

            return false;
        }
};

int main(){
    Solution sol;
    vector<int> num {4,3};

    cout << sol.uniformArray(num) << '\n';

    return 0;
}