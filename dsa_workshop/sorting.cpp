#include <algorithm>
#include <iostream>
using namespace std;
int main()
{    int arr[] = { 5, 4, 1, 2, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array Before Sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr, arr + n);
    cout << "sorted Array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}