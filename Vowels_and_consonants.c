#include<stdio.h>
void main()
{
	char name[100];
	int count=0,i,c=0;
	fgets(name,sizeof(name),stdin);
	for(i=0;name[i]!='\0';i++)
	{
		
		if(name[i]=='a'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='e')
		{
			count++;
		}
		else
		{
			c++;
		}
	}
	printf("no of vowels:%d\n",count);
	printf("no of consonants:%d\n",c);	
}
