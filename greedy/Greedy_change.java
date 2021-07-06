public class Greedy_change {

    public static void main(String[] args) {
       int n = 1260;
       int count = 0;
       int[] coin_array = {500, 100, 50, 10};

       for (int i = 0; i < 4; i++) {
            int coin = coin_array[i];
            count += n / coin;
            n %= coin;
       }

       System.out.println(count);
    }
}