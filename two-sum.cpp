#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
    public:
        void twoSum(vector<int>& nums, int target){
            vector<int> nums2 = nums;
            sort(nums2.begin(), nums2.end());
            int i = 0; int j = 0;
            for(i = 0; i < nums2.size(); i++){
                j = i+1;
                while(j < nums2.size() && nums2[j] != target-nums2[i]){
                    j++;
                }
                if (j < nums2.size()){
                    break;
                }
            }
            
            vector<int> answer;
            answer.reserve(2);
            for(int k = 0; k < nums.size(); k++){
                if(nums[k] == nums2[i]){
                    answer.push_back(k);
                }else if(nums[k] == nums2[j]){
                    answer.push_back(k);
                }
            }

            // return vector<int>{i,j};
        }
};

int main(){
    Solution sol;
    vector<int> num {3,2,4};
    u_int target = 6;

    sol.twoSum(num, target);
}