using Internal;

static void InsertionSort(int[] arr) {
    int n = arr.Length;

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

int[] arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3];

InsertionSort(arr);

Console.WriteLine($"[{string.Join(", ", arr)}]");
