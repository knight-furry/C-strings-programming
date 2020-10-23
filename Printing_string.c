#include<stdio.h>
void main()
{
	char name[100];
	int count=0;
	fgets(name,sizeof(name),stdin);
	puts(name);

	for(int i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
	}
}
