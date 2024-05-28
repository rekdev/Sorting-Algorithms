# Selection sort

This is another algorithm in the family of quadratic sorting algorithms, with a time complexity of $O(n^2)$, so it is inefficient for large amounts of data, but is suitable for small amounts of data, mainly it is useful when the auxiliary memory is limited and it is simple to write.

The pseudocode of this algorithm is the next:

```plaintext
Function SelectionSort(array)
    Set n to Lenght(array)

    For i from 0 to n
        Set min to i

        For j from min + 1 to n
            If arr[j] < arr[min] Then
                Set min to j

        Swap(arr[i], arr[min])
```