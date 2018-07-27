#include<stdio.h>
#include<stdlib.h>
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
	if(n>255){
		printf("ERROR\n");
		return 0;
	}
	int out[8] = {0};
	i=0;
	while(n){
		out[i]=n%2;
		n = n/2;
		i++;
	}
	for(i=7;i>=0;i--)printf("%d ",out[i]);
	return 0;

}
