// @ts-check

/**
 * @param {number[]} arr 
 * @param {number[]} left 
 * @param {number[]} right 
 */
function merge(arr, left, right) {
    const leftLenght = left.length;
    const rightLenght = right.length;

    let i = 0, j = 0, k = 0

    while (i < leftLenght && j < rightLenght) {
        if (left[i] <= right[j]) { 
            arr[k] = left[i] 
            i++
        } else {
            arr[k] = right[j] 
            j++ 
        }

        k++;
    }

    while (i < leftLenght) {
        arr[k] = left[i]
        i++
        k++
    }

    while (j < rightLenght) {
        arr[k] = right[j]
        j++
        k++
    }
}

/**
 * @param {number[]} arr 
 */
async function mergeSort(arr) {
    const n = arr.length;

    if (n > 1) {
        const mid = Math.trunc(n / 2)

        const left = arr.slice(0, mid)
        const right = arr.slice(mid, n)

        await mergeSort(left)
        await mergeSort(right)

        merge(arr, left, right)
    }
}

async function main() {
    let arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3]
    await mergeSort(arr)

    console.log(arr)
}

main()
