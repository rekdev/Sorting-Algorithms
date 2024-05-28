fn bubble_sort(arr: &mut [isize]) {
    let n = arr.len();

    for i in 0..n - 1 {
        let mut swapped = false;

        for j in 0..n - i - 1 {
            if arr[j] > arr[j + 1] {
                arr.swap(j, j + 1);

                swapped = true;
            }
        }

        if !swapped { break };
    }
}

fn main() {
    let mut arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3];

    bubble_sort(&mut arr);

    println!("{:?}", arr);
}
