#include <algorithm>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> h = {10, 30, 40, 20};
    int n = h.size();
    vector<int> dp(n, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i < n; ++i) {
        for (int j = max(0, i-2); j < i; ++j) {
            int cost = dp[j] + abs(h[i]-h[j]);
            dp[i] = min(dp[i], cost);
        }
    }
    cout << dp[n-1] << '\n';
}