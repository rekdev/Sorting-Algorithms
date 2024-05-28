using Internal;

static void BubbleSort(int[] arr) 
{
    int n = arr.Length;

    for (int i = 0; i < n - 1; i++) 
    {
        bool swapped = false;


        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                (arr[j + 1], arr[j]) = (arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;
    }
}

int[] arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3];
BubbleSort(arr);


Console.WriteLine($"[{string.Join(", ", arr)}]");
