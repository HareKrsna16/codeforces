import java.util.Scanner;

public class way_too_long_words_71_A {

    public static void main(String[] args) {
        
        int n;
        Scanner sc = new Scanner(System.in);
        String str, newstr;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {

            str = sc.next();
            if (str.length() >  10) {

                newstr = str.charAt(0) + Integer.toString(str.length() - 2) + str.charAt(str.length() - 1);
                str = newstr;

            }

            System.out.println(str);

        }

        sc.close();

    }

}