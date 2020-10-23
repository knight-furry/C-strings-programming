#include<stdio.h>
void main()
{
	char name[100];
	int count=0,i,c=0,n;
	fgets(name,sizeof(name),stdin);
	
	for(i=0;name[i]!='\0';i++)
	{
		if(i==0 && name[i]!=' ')
		{
			if(name[i]>='A' && name[i]<='Z')
			{
				printf("%c",(name[i]+32));
				i++;
			}	
		}
		if(name[i]==' ')
		{
			printf("%c",name[i]);
			i++;
			if(name[i]>='A' && name[i]<='Z')
			{
				printf("%c",(name[i]+32));
				i++;
			}
		}
		printf("%c",name[i]);
	}
	printf("\n");	
}
