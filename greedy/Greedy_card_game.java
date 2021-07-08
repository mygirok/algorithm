import java.util.*;

public class Greedy_card_game {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int r = scan.nextInt();
        int c = scan.nextInt();
        
        int min = 0;
        int max = 0;
        int[][] arr = new int[r][c];
        for(int i = 0; i < r; i++) {
           for(int j = 0; j < c; j++) {
                arr[i][j] = scan.nextInt();

                if(j == 0) {
                    min = arr[i][0];
                }else{
                    if(arr[i][j] < min) {
                        min = arr[i][j];
                    }
                }
           }
           if(max < min){
               max = min;
           }
        }

        System.out.println(max);
    }
}