import java.util.Arrays;

public class InsertionSort {

    public static void main(String[] args) {
        int[] arr = {8, 10, 7, 1, 4, 6, 2, 5, 9, 3};
        insertionSort(arr);

        System.out.println(Arrays.toString(arr));
    }

    public static void insertionSort(int[] arr) {
        int n = arr.length;
        
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i;

            while (j > 0 && arr[j -  1] > key) {
                arr[j] = arr[j - 1];
                j--;
            }

            arr[j] = key;
        }
    }
}