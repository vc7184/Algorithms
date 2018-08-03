import java.util.Scanner;
class a
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		String sub = sc.nextLine();
		int n = sub.length();
		for(int i=0;i<=str.length()-n;i++){
			if((str.substring(i,i+n).compareToIgnoreCase(sub))==0){
				String newStr = sc.nextLine();
				System.out.println(str.replaceAll(str.substring(i,i+n),newStr));
			}
		}
		
	}
}
