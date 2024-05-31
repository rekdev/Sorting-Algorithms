#include <vector>
#include <iostream>

using namespace std;

void merge(vector<int> &arr, vector<int> &left, vector<int> &right) {
    int left_size = left.size();
    int right_size = right.size();

    int i = 0, j = 0, k = 0;

    while (i < left_size && j < right_size) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }

        k++;
    }

    while (i < left_size) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < right_size) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void merge_sort(vector<int> &arr) {
    int n = arr.size();

    if (n > 1) {
        int mid = n / 2;

        vector<int> left(arr.begin(), arr.begin() + mid);
        vector<int> right(arr.begin() + mid, arr.end());

        merge_sort(left);
        merge_sort(right);

        merge(arr, left, right);
    }
}

int main() {
    vector<int> arr = {8, 10, 7, 1, 4, 6, 2, 5, 9, 3};
    
    merge_sort(arr);

    for (int const i : arr) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
