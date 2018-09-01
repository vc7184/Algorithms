//Best approach for Fibonacci with time complexity of O(n)
#include<stdio.h>
#define MAX 1000000
#define ll long long
ll fibo(ll n)
{
	if(n==1 || n==2)
		return 1;
	ll bottom_up[MAX];
	bottom_up[0] = 1;
	bottom_up[1] = 1;
	for(ll i=2;i<n;i++)
		bottom_up[i]=bottom_up[i-1]+bottom_up[i-2];
	return bottom_up[n-1];
}
int main()
{
	ll n;
	scanf("%lld",&n);
	printf("%lld ",fibo(n));
	return 0;
}
