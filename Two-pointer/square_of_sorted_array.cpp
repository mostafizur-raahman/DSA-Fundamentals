#include <bits/stdc++.h>
using namespace std;
vector<int> square_of_sorted_array(vector<int> v, int n) {

    int low = 0, high = n - 1;
    int idx = n - 1;
    vector<int> result(n);
    while (low <= high) {
        int leftSq = v[low] * v[low];
        int rightSq = v[high] * v[high];

        if (leftSq > rightSq) {
            result[idx] = leftSq;
            low++;
        } else {
            result[idx] = rightSq;
            high--;
        }
        idx--;
    }
    return result;
}
int main(void) {

    vector<int> v = {-2, -1, 0, 1, 2};
    vector<int> ans = square_of_sorted_array(v, 5);
    for (auto u : ans) {
        cout << u << endl;
    }
}