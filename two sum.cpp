#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSumSorted(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1;

    while (start < end) {
        int sum = nums[start] + nums[end];

        if (sum == target) {
            return {start, end}; // return indices
        }
        else if (sum < target) {
            start++; // need bigger sum
        }
        else {
            end--; // need smaller sum
        }
    }
    return {}; // No solution found
}

int main() {
    vector<int> nums = {2, 7, 11, 15}; // already sorted
    int target = 18;

    vector<int> result = twoSumSorted(nums, target);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
