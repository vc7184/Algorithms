#include<stdio.h>
#include<stdlib.h>

int makeTower(int n, char source, char temp, char destination)
{
		if(n == 1)
		{
				printf("Disk %d moved from %c to %c.\n",n,source,destination);
				return 0;
		}
		makeTower(n-1,source,destination,temp);
		printf("Disk %d moved from %c to %c.\n",n,source,destination);
		makeTower(n-1,temp,source,destination);
		return 0;
}

int main( )
{
		int num;
		char X='A',Y='B',Z='C';
		printf("Enter number of Disks: ");
		scanf("%d",&num);
		makeTower(num,X,Y,Z);
		return 0;
}




