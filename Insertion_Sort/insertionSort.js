// @ts-check

/**
 * @param {number[]} arr 
 */
async function insertionSort(arr) {
    const n = arr.length

    for (let i = 1; i < n; i++) {
        const key = arr[i]
        let j = i

        while (j > 0 && arr[j - 1] > key) {
            arr[j] = arr[j - 1]
            j--
        }

        arr[j] = key
    }
}

async function main() {
    let arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3]
    await insertionSort(arr)

    console.log(arr)
}

main()
