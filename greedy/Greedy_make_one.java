import java.util.*;

public class Greedy_make_one {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        int k = scan.nextInt();
        
        int cnt = 0;
        while(n != 1) {
            if(n % k == 0) {
                n /= k;
            }else{
                n -= 1;
            }

            ++cnt;
        }
        System.out.println(cnt);
    }
}