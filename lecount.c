#include <stdio.h>
#include <string.h>

int main()
{
	int srcLen =0, flag=0,looplen=0,i,count;
	char src[20], *srcPtr,printStr;
	printf ("\n enter string\n");
	scanf  ("%s",&src);
	printf ("given string is=%s\n", src);
	srcLen = strlen (src);
	srcPtr = src;
	while ((*srcPtr!=NULL) && looplen <srcLen)
	{
		if ((*srcPtr>='a'&& *srcPtr<='z') || (*srcPtr>='A' && *srcPtr<='Z') || isdigit(*srcPtr))
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
		srcPtr++;
		looplen++;
	}
	looplen=0;
	if (flag==1)
	{
		srcPtr=src;
		while ((*srcPtr!=NULL)&& looplen<srcLen) 
        	{
                	if ((*srcPtr>='a'&& *srcPtr<='z') || (*srcPtr>='A' && *srcPtr<='Z'))
                	{
				printStr=*srcPtr;
				looplen++;
				if (looplen<srcLen)
				{
					srcPtr++;
					if (isdigit(*srcPtr)) 
					{
						count=*srcPtr-'0';
						looplen++;
						if (looplen<srcLen)
						{
							srcPtr++;
							if(isdigit(*srcPtr))
							{
								count=count*10;
								count+=*srcPtr-'0';
								looplen++;
								if(looplen<srcLen)
								{
									srcPtr++;
								}
							}
						}
						for(i=0;i<count;i++)
						{
							printf("%c",printStr);
						}
						count=0;	
					}
					else
					{
						printf("seconde value should integer\n");
					}
				}
			}
			else
			{
				printf("\nfirst letter should be Alpha character\n");
				break;
			}

		}
	}
				
}
