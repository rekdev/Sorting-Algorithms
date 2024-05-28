import java.util.Arrays;

public class BubbleSort {
    
    public static void main(String[] args) {
        int[] arr = {8, 10, 7, 1, 4, 6, 2, 5, 9, 3};
        bubbleSort(arr);
        
        System.out.println(Arrays.toString(arr));
    }

    public static void bubbleSort(int[] arr) {
        int n = arr.length;

        for (int i = 0; i < n - 1; i++) {
            boolean swapped = false;

            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    final int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;

                    swapped = true;
                }
            }

            if (!swapped) break;
        }
    }
}
