#include<stdio.h>
void main()
{
	char name[100];
	int count=0,i=0,n,flag=0;
	printf("Enter a string:\n");
	fgets(name,sizeof(name),stdin);
	printf("enter no of alphabates:");
	scanf("%d",&n);
	
	while(name[i]!='\0')
	{
		i++;
		if(i==n)
		break;
	}
	n=n+i;
	while(i<=n)
	{
		printf("%c",name[i]);
		i++;
	}
	printf("\n");
}
