using Internal;

static void merge(int[] arr, int[] left, int[] right) {
    int leftLenght = left.Length;
    int rightLenght = right.Length;

    int i = 0, j = 0, k = 0;

    while (i < leftLenght && j < rightLenght) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }

        k++;
    }

    while (i < leftLenght) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < rightLenght) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

static void mergeSort(int[] arr) {
    int n = arr.Length;

    if (n > 1) {
        int mid = n / 2;

        int[] left = new int[mid];
        int[] right = new int[n - mid];

        for (int i = 0; i < mid; i++) {
            left[i] = arr[i];
        }

        for (int j = mid; j < n; j++) {
            right[j - mid] = arr[j];
        }

        mergeSort(left);
        mergeSort(right);

        merge(arr, left, right);
    }
}

int[] arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3];
mergeSort(arr);

Console.WriteLine($"[{string.Join(", ", arr)}]");
