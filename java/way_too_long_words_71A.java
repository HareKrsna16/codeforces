import java.io.*;
import java.util.*;

public class way_too_long_words_71A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        String s;
        n = sc.nextInt();
        while(n!=0) {
            s = sc.next();
            if (s.length() > 10)
                System.out.println(s.charAt(0) + Integer.toString(s.length()-2) + s.charAt(s.length()-1));
            n--;
        }
    }
}
