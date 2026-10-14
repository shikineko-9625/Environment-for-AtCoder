#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> w = {2, 1, 3, 2};
    vector<int> v = {3, 2, 6, 4};
    int n = w.size(), W = 5;
    vector<vector<int>> dp(
        n + 1, vector<int>(W + 1, 0));
    for (int i = 0; i < n; ++i) {
        for (int c = 0; c <= W; ++c) {
            dp[i+1][c] = dp[i][c];
            if (c >= w[i]) {
                int take = dp[i][c-w[i]] + v[i];
                dp[i+1][c] = max(dp[i+1][c], take);
            }
        }
    }

    cout << dp[n][W] << '\n';
}