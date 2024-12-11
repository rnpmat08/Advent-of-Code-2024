import java.util.Scanner;
import java.util.Arrays;

public class Day1Part1 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int [] a = new int[1000], b = new int[1000];
        for (int i = 0; i < 1000; i++) { a[i] = s.nextInt(); b[i] = s.nextInt(); }
        Arrays.sort(a); Arrays.sort(b);
        int ans = 0;
        for (int i = 0; i < 1000; i++) { ans += Math.abs(a[i] - b[i]); }
        System.out.println(ans);
    }
}