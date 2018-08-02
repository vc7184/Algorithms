/*Take this input
Output will show the frequency of every element of second array in the first array
4
aba
baba
aba
xzxb
3
aba
xzxb
ab
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,s,q,j;
	scanf("%d",&s);
	char* str[1];
	for(i=0;i<s;i++){
		str[i] = (char*)malloc(sizeof(s));
		scanf("%s",str[i]);
	}
	scanf("%d",&q);
	char* que[100];
	for(i=0;i<q;i++){
		que[i] = (char*)malloc(sizeof(q));
		scanf("%s",que[i]);
	}
	for(i=0;i<q;i++){
		int count = 0;
		for(j=0;j<s;j++){
			if(strcmp(que[i],str[j])==0)
				count++;
		}
		printf("%d ",count);
	}
	return 0;
	
}
