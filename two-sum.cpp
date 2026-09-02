#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target){
            for(int i = 0; i < nums.size(); i++){
                int search = target-nums[i];
                int j = i+1;
                while(j < nums.size() && nums[j] != search){
                    j++;
                }
                if (j < nums.size()){
                    return vector<int> {i, j};
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