import java.util.Scanner;

public class team_231_A {
    public static void main(String[] args) {
        int n, sol = 0;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            int a, b, c;
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            if (a+b+c >= 2) {
                sol++;
            }
        }
        System.out.println(sol);
        sc.close();
    }
}