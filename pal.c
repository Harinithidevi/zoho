#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	int len=0, n=0, i=0, j=0, last=0;
	printf ("\nenter string\n");
	scanf ("%s", str);
	printf ("%s\n", str);
	len = strlen(str);
	if (len%2==0)
	{
		printf("\n given string is even\nplease enter odd\n");
	}
	else
	{
		last = len-1;
		for ( i=0; i<len; i++)
		{
			for (j=0; j<len; j++)
			{
				if(i==j)
				{
					printf("%c", str[i]);
				}
				else if(j == last)
				{
					printf ("%c", str[last]);
				}
				else
				{
					printf (" ");
				}
			}
			printf ("\n");
			last -= 1; 
		}
	}
}
