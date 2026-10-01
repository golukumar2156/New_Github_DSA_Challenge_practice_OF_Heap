#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;
vector<int> dp;
int helper(int n, vector<int>& dp) {
    if(n == 1)
        return 0;

    if(n == 2 || n == 3)
        return 1;

    if(dp[n] != -1)
        return dp[n];
    return dp[n] = 1 + min({
        helper(n-1, dp),
        (n%2 == 0) ? helper(n/2, dp) : INT_MAX,
        (n%3 == 0) ? helper(n/3, dp) : INT_MAX
    });
}

int main() {
    int n;
    cin >> n;
    dp.resize(n+1,-1);
    cout << helper(n, dp) << endl;
    return 0;
}