# Insertion sort

This is a simple algorithm from the family of quadratic sorting algorithms, its implementation is very simple, but the performance is poor when the list is large. It is very common in technical interviews.

The average and worst case performance is $O(n^2)$ and the better case is $O(n)$ when the list is already sorted, like other $n^2$ algorithms such as bubble sort and selection sort.

Its pseudocode is the next:

```plaintext
Function InsertionSort(array)
    Set n to Lenght(array)

    For i from 1 to n
        Set key to array[i]
        Set j to i

        While j > 0 and array[j - 1] > key Do
            Set array[j] to array[j - 1]
            Set j to j - 1

        Set array[j + 1] to key
```
