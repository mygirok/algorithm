import java.util.*;

public class Greedy_biggest_num {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        int m = scan.nextInt();
        int k = scan.nextInt();

        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scan.nextInt();
        }

        Arrays.sort(arr);
        int first = arr[n - 1];
        int second = arr[n - 2];
        
        int cnt = (m / (k + 1)) * k;
        cnt += m % (k + 1);

        

        int result = 0;
        result += cnt * first;
        result += (m - cnt) * second;

        System.out.print(result);
    }
}

