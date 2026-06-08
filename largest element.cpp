#include <bits/stdc++.h>
using namespace std;


    int largestElement(vector<int>& nums) {
        int maxi = INT_MIN; // from climits

        for (int i = 0; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);
            //if (num[i]>max)
            //max = num[i]
        }
        //return max value
        return maxi;
    }


int main() {
    vector<int> nums = {3, 3, 6, 1};
    Solution sol;
    cout << "Maximum value is: " << sol.largestElement(nums) << endl;
    return 0;
}
