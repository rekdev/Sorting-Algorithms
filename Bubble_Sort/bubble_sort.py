def bubble_sort(arr: list):
    n = len(arr)

    for i in range(n):
        swapped = False

        for j in range (n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

                swapped = True

        if not swapped:
            break


arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3]
bubble_sort(arr)

print(arr)
