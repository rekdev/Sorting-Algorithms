def selection_sort(arr: list):
    n = len(arr)

    for i in range(0, n):
        min = i

        for j in range(min + 1, n):
            if arr[j] < arr[min]:
                min = j

        arr[i], arr[min] = arr[min], arr[i]


arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3]
selection_sort(arr)

print(arr)
