#include <iostream>

using namespace std;

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i;

        while (j > 0 && arr[j - 1] > key) {
            arr[j] = arr[j - 1];
            j--;
        }

        arr[j] = key;
    }
}

int main() {
    int arr[] = {8, 10, 7, 1, 4, 6, 2, 5, 9, 3};
    int n = sizeof(arr) / sizeof(int);

    insertion_sort(arr, n);

    for (const int i: arr) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
