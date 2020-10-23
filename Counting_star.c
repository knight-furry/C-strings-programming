#include<stdio.h>
void main()
{
	char name[100];
	int count=0,i=0,n,c=0,co=0,cou=0;
	printf("Enter a string:\n");
	fgets(name,sizeof(name),stdin);
	
	while(name[i]!='\0')
	{
		if(name[i]>='a' && name[i]<='z')
		count++;
		else if(name[i]>='A' && name[i]<='Z')
		c++;
		else if(name[i]==' ')
		co++;
		else if(name[i]>='0' && name[i]<='9')
		cou++;
		i++;
	}
	printf("Upper=%d\tLOwer=%d\tSpace=%d\t\tNumber=%d\n",c,count,co,cou);
}
