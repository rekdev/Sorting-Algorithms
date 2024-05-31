fn merge(arr: &mut [isize], left: &mut [isize], right: &mut [isize]) {
    let left_len = left.len();
    let right_len = right.len();

    let mut i = 0;
    let mut j = 0;
    let mut k = 0;

    while i < left_len && j < right_len {
        if left[i] <= right[j] {
            arr[k] = left[i];
            i += 1;
        } else {
            arr[k] = right[j];
            j += 1;
        }
        k += 1;
    }

    while i < left_len {
        arr[k] = left[i];
        i += 1;
        k += 1;
    }

    while j < right_len {
        arr[k] = right[j];
        j += 1;
        k += 1;
    }
}

fn merge_sort(arr: &mut [isize]) {
    let n = arr.len();

    if n > 1 {
        let mid = n / 2;

        let mut left = arr[..mid].to_vec();
        let mut right = arr[mid..].to_vec();

        merge_sort( &mut left);
        merge_sort( &mut right);

        merge(arr, &mut left, &mut right);
    }
}

fn main() {
    let mut arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3];

    merge_sort(&mut arr);

    println!("{:?}", arr);
}
