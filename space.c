#include <stdio.h>
#include<string.h>
main() 
{
	char str[25];
	int l=strlen(str);
	int count=0;
	for(int i=0;i<=l;i++)
	{
		if(str[i]==' ')
		{
			count=count+1;
		}
	}
	printf("The total no of spaces in the word is %d",count);
getch();
}
