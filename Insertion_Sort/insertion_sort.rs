fn insertion_sort(arr: &mut [isize]) {
    let n = arr.len();

    for i in 1..n {
        let key = arr[i];
        let mut j = i;

        while j > 0 && arr[j - 1] > key {
            arr[j] = arr[j - 1];
            j-=1;
        }

        arr[j] = key;
    }
}

fn main() {
    let mut arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3];

    insertion_sort(&mut arr);

    println!("{:?}", arr);
}