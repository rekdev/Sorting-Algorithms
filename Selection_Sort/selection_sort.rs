fn selection_sort(arr: &mut [isize]) {
    let n = arr.len();

    for i in 0..n {
        let mut min = i;

        for j in min + 1..n {
            if arr[j] < arr[min] {
                min = j;
            }
        }

        arr.swap(i, min);
    }
}

fn main() {
    let mut arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3];

    selection_sort(&mut arr);

    println!("{:?}", arr);
}
