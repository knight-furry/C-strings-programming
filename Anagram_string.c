#include<stdio.h>
void main()
{
	char name[100],name1[100];
	int count=0,i,c=0,n,j;
	printf("Enter string a:\n");
	fgets(name,sizeof(name),stdin);
	printf("enter string b:\n");
	fgets(name1,sizeof(name1),stdin);
	
	for(i=0;name[i]!='\0';i++)
	{
		for(j=0;name1[j]!='\0';j++)
		{
			if(name[i]==name1[j])
			count++;
		}
	}
	if(count==i)
	printf("The string is Anagram string\n");
	else
	printf("The string is not Anagram string\n");
	printf("\n");
}
