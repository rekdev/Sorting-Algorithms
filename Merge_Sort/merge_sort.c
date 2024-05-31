#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int n, int mid, int left[], int right[]) {
    int left_size = mid;
    int right_size = n - mid;

    int i = 0, j = 0, k = 0;

    while (i < left_size && j < right_size) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }

        k++;
    }

    while (i < left_size) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < right_size) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int n) {
    if (n > 1) {
        int mid = n / 2;

        int *left = (int *)malloc(mid * sizeof(int));
        int *right = (int *)malloc((n - mid) * sizeof(int));

        if (left == NULL || right == NULL) {
            printf("Memory allocation error\n");
            exit(1);
        }

        for (int i = 0; i < mid; i++) {
            left[i] = arr[i];
        }

        for (int j = mid; j < n; j++) {
            right[j - mid] = arr[j];
        }

        merge_sort(left, mid);
        merge_sort(right, n - mid);

        merge(arr, n, mid, left, right);

        free(left);
        free(right);
    }
}

int main() {
    int arr[] = {8, 10, 7, 1, 4, 6, 2, 5, 9, 3};
    int n = sizeof(arr) / sizeof(int);

    merge_sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
