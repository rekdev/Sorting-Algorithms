import java.util.Arrays;

public class SelectionSort {
    
    public static void main(String[] args) {
        int[] arr = {8, 10, 7, 1, 4, 6, 2, 5, 9, 3};
        selectionSort(arr);

        System.out.println(Arrays.toString(arr));
    }

    public static void selectionSort(int[] arr) {
        int n = arr.length;

        for (int i = 0; i < n; i++) {
            int min = i;

            for (int j = min + 1; j < n; j++) {
                if (arr[j] < arr[min]) min = j;
            }

            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
