#include<stdio.h>
void main()
{
	char name[100];
	int count=0,i,c=0,n;
	fgets(name,sizeof(name),stdin);
	printf("Enter position of word:");
	scanf("%d",&n);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		{
			if(name[i+1]==' ')
			continue;
			count++;	
		}
		if((n-1)==count)
		{
			i++;
			while(name[i]!=' ' && name[i]!='\0')
			{
				printf("%c",name[i]);
				i++;
			}
			break;
		}
	
	}
	printf("\n");	
}
