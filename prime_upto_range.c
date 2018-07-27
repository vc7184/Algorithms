#include<stdio.h>
#include<stdlib.h>
void printPrime(int* range)
{
	int a[*range],i,j;
	for(i=0;i<(*range);i++)
		a[i]=i+2;
	for(i=0;i<(*range);i++){
		if(a[i]!=-1){
			for(j=2*a[i]-2;j<(*range);j=j+a[i])
				a[j]=-1;
		}
	}
	for(i=0;i<(*range)-1;i++){
		if(a[i]!=-1)
			printf("%d ",a[i]);
	}
}
int main(int argc, char* argv[])
{
	int i;
	if(argc!=2){
		printf("ERROR\n");
		return 0;
	}
	for(i=0;argv[1][i]!='\0';i++){
		if(argv[1][i]<'0' || argv[1][i]>'9'){
			printf("ERROR\n");
			return 0;
		}
	}
	int n = atoi(argv[1]);
	if(n==0 || n==1)
		printf("ERROR\n");
	else
		printPrime(&n);
	return 0;

}
