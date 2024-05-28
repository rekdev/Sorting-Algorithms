// @ts-check

/**
 * @param {number[]} arr 
 */
async function selectionSort(arr) {
    const n = arr.length

    for (let i = 0; i < n; i++) {
        let min = i

        for (let j = min + 1; j < n; j++) {
            if (arr[j] < arr[min]) min = j
        }

        const temp = arr[i]
        arr[i] = arr[min]
        arr[min] = temp
    }
}

async function main() {
    let arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3]
    await selectionSort(arr)

    console.log(arr)
}

main()
