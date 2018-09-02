import java.math.BigInteger;
import java.util.Scanner;
class a
{
	static BigInteger fact(int n)
	{
		BigInteger ob = new BigInteger("1");
		for(int i=2;i<=n;i++)
			ob = ob.multiply(BigInteger.valueOf(i));
		return ob;
	}
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.println(fact(n));		
	}
}
