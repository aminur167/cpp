#include <iostream>
#include <vector>
using namespace std;

// binary search - returns index or -1
int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 45, 67, 78};
    int target;
    cout << "Enter number to search: ";
    cin >> target;

    int idx = binarySearch(arr, target);
    if (idx != -1)
        cout << target << " found at index " << idx << endl;
    else
        cout << target << " not found" << endl;

    return 0;
}
