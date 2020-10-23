#include<stdio.h>
void main()
{
	char name[100];
	int count=0;
	fgets(name,sizeof(name),stdin);
	puts(name);
	printf("singal space string is:\n");
	for(int i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		{
			name[i]='$';
		}
		printf("%c",name[i]);
	}
}
