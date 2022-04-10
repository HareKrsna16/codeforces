import java.util.*;
import java.io.*;

public class bit_plus_plus_282_A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        PrintWriter p = new PrintWriter(new BufferedOutputStream(System.out));
        int n, x = 0;
        n = sc.nextInt();
        String bit;
        while(n > 0) {
            bit = sc.next();
            if (bit.charAt(1) == '+') {
                ++x;
            } else {
                --x;
            }
            n--;
        }
        p.println(x);
        p.close();
        sc.close();
    }
}
