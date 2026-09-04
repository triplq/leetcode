#include <iostream>

using namespace std;

/*leftmost binary serach aka std::lower_bound
search for middle of a massive
if mid<x => left = mid+1
else mid>=x => right = mid
repeat*/

class Solution{
public:
    int searchInsert(vector<int>& nums, int target){
        int left = 0; int right = nums.size();
        int mid;
        while(right != left){
            mid = (right+left)/2;
            if (nums[mid] < target)
                left = mid+1;
            else
                right = mid;
        }

        return right;
    }
};

int main(){
    Solution sol;
    vector<int> nums {1,3,5,6};

    cout << sol.searchInsert(nums, 2) << '\n';

    return 0;
}