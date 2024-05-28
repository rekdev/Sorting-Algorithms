#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                const int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }

        if (!swapped) break;
    }
}

int main() {
    int arr[] = {8, 10, 7, 1, 4, 6, 2, 5, 9, 3};
    int n = sizeof(arr) / sizeof(int);

    bubble_sort(arr, n);

    for (const int i : arr) {
        cout << i << " ";
    }

    cout << endl;

    return  0;
}
 