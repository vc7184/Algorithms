import java.util.Scanner;
class a
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();//Input String
		String sub = sc.nextLine();//Sub-String
		int n = sub.length();
		for(int i=0;i<=str.length()-n;i++){
			if((str.substring(i,i+n).compareToIgnoreCase(sub))==0){
				String newStr = sc.nextLine();//New Sub-String that will replace the old one
				System.out.println(str.replaceAll(str.substring(i,i+n),newStr));
			}
		}
		
	}
}
