import java.io.*;
import java.util.*;

public class domino_piling_50_A{
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));

      int m, n;
      m = sc.nextInt();
      n = sc.nextInt();

      out.println((m*n) / 2);
      sc.close();
      out.close();
   }

}
