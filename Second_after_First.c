#include<stdio.h>
void main()
{
	char name[100];
	int count=0,i=0,n,flag=0;
	printf("Enter a string:\n");
	fgets(name,sizeof(name),stdin);
	
	while(name[i]!='\0')
	{
		if(name[i]==' ')
		i++;
		else
		{
			printf("%c",name[i]);
			i++;
		}	
	}
		
}
