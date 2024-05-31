# Merge sort

It is one algorithm of the **divide and conquer** family, it has $O(n \log{n})$ time complexity in all cases and requires $O(n)$ additional space to work.

This consist of two functions, *Merge* and *MergeSort*.

*MergeSort* is resposible of take the original array and subdivide it in *left* and *right* subarrays, and it implements the necessary recursive calls for this algorithm works.

The pseudocode of *MergeSort* function is the next:

```plaintext
Function MergeSort(array)
    Set n to Lenght(array) 

    If n > 1 Then
        Set mid to n / 2

        Set left to array[0 : mid]
        Set right to array[mid + 1 : n]

        MergeSort(left)
        MergeSort(right)

        Merge(array, left, right)
```

*Merge* is resposible of take the arrays *left* and *right* and merge them into one sorted array, this process is repeated by *MergeSort* function until the array is completely sorted.

Its pseudocode is the next:

```plaintext
Function Merge(array, left, right)
    Set leftLenght to Lenght(left)
    Set rightLenght to Lenght(right)

    Set i, j, k to 0

    While i < leftLenght and j < rightLenght Do
        If left[i] <= right[j] Then
            Set array[k] to left[i]
            Set i to i + 1
        Else
            Set array[k] to right[j]
            Set j to j + 1

        Set k to k + 1

    While i < leftLenght Do
        Set array[k] to left[i]
        Set i to i + 1
        Set k to k + 1

    While j < rightLenght Do
        Set array[k] to right[j]
        Set j to j + 1
        Set k to k + 1
```


