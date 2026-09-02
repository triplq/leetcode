#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target){
            unordered_map<int,int> hash;
            for(int i = 0; i < nums.size(); i++){
                auto it = hash.find(nums[i]);
                if (it == hash.end()){
                    hash.insert(target-nums[i], i);
                }else{
                    return vector<int>(i, it->second);
                }
            }
        }
};

int main(){
    Solution sol;
    vector<int> num {3,2,4};
    u_int target = 6;

    sol.twoSum(num, target);
}