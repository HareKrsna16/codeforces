import java.io.*;
import java.util.*;

public class team_231A {
	public static void main(String args[]) {
		int t, a, b, c, out=0;
		Scanner sc = new Scanner(System.in);
		PrintWriter p = new PrintWriter(System.out, true);
		t = sc.nextInt();
		while(t!=0) {
			a = sc.nextInt();
			b = sc.nextInt();
			c = sc.nextInt();
			if((a + b + c) >= 2) {
				++out;
			}
			t--;
		}
		p.println(out);
	}
}
