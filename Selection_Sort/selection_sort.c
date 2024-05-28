#include <stdio.h>

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int min = i;

        for (int j = min + 1; j < n; j++) {
            if (arr[j] < arr[min]) min = j;
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main() {
    int arr[] = {8, 10, 7, 1, 4, 6, 2, 5, 9, 3};
    int n = sizeof(arr) / sizeof(int);

    selection_sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
