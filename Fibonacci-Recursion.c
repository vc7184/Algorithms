//Don't use this approach.. for large value of n it can cause memory stack overflow
#include<stdio.h>
int fibo(int n)
{
	if(n<=1)
		return n;
	return (fibo(n-1)+fibo(n-2));
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d ",fibo(n));
	return 0;
}
