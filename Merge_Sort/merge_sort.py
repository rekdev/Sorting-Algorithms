def merge(arr: list, left: list, right: list):
    left_len = len(left)
    right_len = len(right)

    i = j = k = 0

    while i < left_len and j < right_len:
        if left[i] <= right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1

        k += 1

    while i < left_len:
        arr[k] = left[i]
        i += 1
        k += 1

    while j < right_len:
        arr[k] = right[j]
        j += 1
        k += 1


def merge_sort(arr: list):
    n = len(arr)

    if n > 1:
        mid = n // 2

        left = arr[:mid]
        right = arr[mid:]

        merge_sort(left)
        merge_sort(right)
        merge(arr, left, right)


arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3]
merge_sort(arr)

print(arr)
