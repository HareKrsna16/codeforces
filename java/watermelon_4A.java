import java.io.*;
import java.util.*;

public class watermelon_4A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println((n%2 == 0 && n != 2)?"YES":"NO");
    }
}
