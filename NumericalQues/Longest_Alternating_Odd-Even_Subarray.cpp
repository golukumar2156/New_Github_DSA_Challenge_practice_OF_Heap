
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestAlternatingSubarray(vector<int>& nums) {
    int n = nums.size();
    int len = 1;
    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] % 2 != nums[i - 1] % 2) {
            len++;
        } else {
            len = 1;
        }
        ans = max(ans, len);
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 3, 2, 4, 5, 7, 8};

    cout << longestAlternatingSubarray(nums) << endl;
    return 0;
}
