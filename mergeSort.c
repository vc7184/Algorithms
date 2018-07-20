#include<stdio.h>
int i,j,k;
void mergeSort(int[],int,int);
void merge(int[],int,int,int);

void merge(int a[],int p,int q,int r)
{
	int n1=q-p+1;
	int n2=r-q;
	int L[n1],R[n2];
	for(i=1;i<=n1;i++)
		L[i]=a[p+i-1];
	for(j=1;j<=n2;j++)
		R[j]=a[q+j];
	L[n1+1]=9999;
	R[n2+1]=9999;
	i=j=1;
	for(k=p;k<=r;k++)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
	}
}
		

void mergeSort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		mergeSort(a,p,q);
		mergeSort(a,q+1,r);
		merge(a,p,q,r);
	}
}
	

int main()
{
	int n,p,r;
	printf("Enter num of elements : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=0;
	r=n-1;
	mergeSort(a,p,r);
	printf("Sorted array is : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
	
