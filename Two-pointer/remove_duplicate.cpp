#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[], int n) {
    if (n < 1)
        return -1;
    if (n == 1)
        return 1;

    int nextNonDuplicate = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[nextNonDuplicate - 1]) {
            arr[nextNonDuplicate] = arr[i];
            nextNonDuplicate++;
        }
    }

    return nextNonDuplicate;
}
int main(void) {
    // call
}