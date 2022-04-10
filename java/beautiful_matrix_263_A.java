import java.util.*;
import java.io.*;

public class beautiful_matrix_263_A {
    public static void main(String args[]) {
        Scanner sc = new Scanner (System.in);
        PrintWriter p = new PrintWriter(new BufferedOutputStream(System.out));
        int i=0,j=0,num=0;
        for (i=1;i<=5;i++) {
            for(j=1;j<=5;j++){
                num = sc.nextInt();
                if (num == 1)
                    break;
            }
            if(num==1)
                break;
        }
        p.println(Math.abs(i-3)+Math.abs(j-3));
        p.close();
        sc.close();
    }
}
