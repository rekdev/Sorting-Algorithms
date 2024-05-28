using Internal;

static void SelectionSort(int[] arr) {
    int n = arr.Length;

    for (int i = 0; i < n; i++) {
        int min = i;

        for (int j = min + 1; j < n; j++) {
            if (arr[j] < arr[min]) min = j;
        }

        (arr[i], arr[min]) = (arr[min], arr[i]);
    }
}

int[] arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3];
SelectionSort(arr);

Console.WriteLine($"[{string.Join(", ", arr)}]");
