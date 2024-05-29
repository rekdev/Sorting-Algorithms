def insertion_sort(arr: list):
    n = len(arr)

    for i in range(1, n):
        key = arr[i]
        j = i

        while j > 0 and arr[j - 1] > key:
            arr[j] = arr[j - 1]
            j -= 1

        arr[j] = key


arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3]
insertion_sort(arr)

print(arr)
