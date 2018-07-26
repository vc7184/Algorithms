#include<stdio.h>
int checkMajority(int a[], int mid, int x, int n)
{
	int i;
	for(i=0;i<mid;i++){
		if(a[i]==x && a[i+n/2]==x)
			return 1;
	}
	return 0;
}
int main()
{
    int n,x,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    scanf("%d",&x);
    int mid = (n%2 ? n/2+1 : n/2);
    if(checkMajority(a,mid,x,n))
    	printf("YES\n");
    else
    	printf("NO\n");
    
    return 0;
}

