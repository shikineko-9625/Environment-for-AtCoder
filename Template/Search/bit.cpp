#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {2, 3, 5, 7};
    long long target = 7;
    int n = a.size();
    int count = 0;
    for (int mask = 0; mask < (1 << n); ++mask) {
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            if ((mask >> i) & 1) {
                sum += a[i];
            }
        }
        if (sum == target) {
            ++count;
        }
    }
    cout << count << '\n';
}
