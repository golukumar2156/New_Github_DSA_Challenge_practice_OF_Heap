#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int helper(vector<int>& ans, unordered_map<int,int>& mp, int capacity) {
    int left = 0;
    int maxlen = 0;
    for (int right = 0; right < ans.size(); right++) {
        mp[ans[right]]++;
        while (mp[ans[right]] > capacity) {
            mp[ans[left]]--;
            left++;
        }
        maxlen = max(maxlen, right - left + 1);
    }
    return maxlen;
}

int main() {
    vector<int> ans = {1, 1, 3, 1, 4, 5, 1, 1, 1};
    int capacity = 2;

    unordered_map<int,int> mp;
    cout << helper(ans, mp, capacity) << endl;

    return 0;
}