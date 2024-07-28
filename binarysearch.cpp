#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(const vector<int>& arr, int low, int high, int target) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;

        if (arr[mid] > target)
            return binarySearch(arr, low, mid - 1, target);

      return binarySearch(arr, mid + 1, high, target);
    }
    return -1;
}

int main() {
    int n, x;
    cout << "Enter total no. of elements in an array : ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout<< "Enter element arr["<<i<<"] : ";
        cin >> arr[i];
    }

    cout << "Search an element : ";
    cin >> x;
    sort(arr.begin(), arr.end());

    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1)
        cout <<"found at index :  " << result << endl;
    else
        cout <<"Element not found." << endl;

    return 0;
}