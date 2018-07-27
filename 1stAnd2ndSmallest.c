#include<stdio.h>
#include<limits.h>
int main()
{
	int n,i,a,b;//a=smallest,b=second smallest
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	a=b=INT_MAX;
	for(i=0;i<n;i++){
		if(arr[i]<a){
			b=a;
			a=arr[i];
		}
		else if(arr[i]<b && arr[i]!=a)
			b=arr[i];
	}
	printf("%d %d",a,b);
	return 0;
}

