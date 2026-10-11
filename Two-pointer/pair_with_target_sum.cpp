#include <bits/stdc++.h>
using namespace std;

bool pairWithTargetSum(int arr[], int n, int target, int result[2]) {
    if (n < 2) {
        return 0;
    }
    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            result[0] = left;
            result[1] = right;
            return 1;
        }

        if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return 0;
}
int main(void) {
    //  Input:  [1, 2, 3, 4, 6], target = 6
    // Output (indices): [1, 3]  // arr[1] + arr[3] = 2 + 4 = 6

    int arr[] = {1, 2, 3, 4, 6};
    int target = 6;
    int result[2];
    bool ans = pairWithTargetSum(arr, 5, target, result);
    if (ans) {
        cout << "YES" << endl;
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "NO" << endl;
    }
}