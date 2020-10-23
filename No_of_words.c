#include<stdio.h>
void main()
{
	char name[100];
	int count=0;
	fgets(name,sizeof(name),stdin);
	puts(name);

	for(int i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		count++;
	}
	printf("no. of words are:%d\n",count+1);
}
