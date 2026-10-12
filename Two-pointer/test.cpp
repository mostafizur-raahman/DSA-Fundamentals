#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> v, int target, int n) {
    unordered_set<int> seen;
    int low = 0, high = n - 1;
    while (low <= high) {
        int sum = v[low] + v[high];
        if (sum == target) {
            return {low, high};
        }
        if (sum > target) {
            high--;
        } else {
            low++;
        }
    }
    return {-1, -1};
}
int main(void) {
    // [1, 2, 3, 4, 6], target = 6

    vector<int> v = {1, 2, 3, 4, 6};
    int taregt = -11;
    vector<int> ans = twoSum(v, taregt, 5);
    for (auto u : ans) {
        cout << u << " ";
    }
    cout << endl;
}