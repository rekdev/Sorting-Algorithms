# Bubble sort

This algorithm is the simplest of the sorting algorithms. It is only used for academic purposes and not in real world applications.

The average and worst case performance is $O(n^2)$ and the better case is $O(n)$ when the list is already sorted, therefore, it is not recommended for be use in large element lists or in real world scenarios.

The pseudocode for this algorithm is the next:

```plaintext
Function BubbleSort(array)
    Set n to Lenght(array)

    For i from 0 to n - 1
        Set swapped to False

        For j from 0 to n - i - 1
            If array[j] > array[j + 1] Then
                Swap(array[j], array[j + 1])

                Set swapped to True
        End For

        If Not swapped Then
            break
    End For
```
