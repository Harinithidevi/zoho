#include <stdio.h>
#include <string.h>

int main()
{
	char str[20],subStr[10];
	int len=0,count=0,sublen=0,i,j,pos=0;
	printf("\nenter string\n");
	scanf("%s", &str);
	len =strlen(str);
	printf("\n enter substring\n");
	scanf("%s", &subStr);
	sublen=strlen(subStr);
	pos=-1;
	for(i=0;i<len;i++)
	{
		if(str[i]==subStr[0])
		{
			for(j=0;j<sublen;j++)
			{
				if(str[i]==subStr[j])
				{
					count++;
					i++;
					if(count==sublen)
					{
						pos=(i-sublen);
					}
				}
				else
				{
					count=0;
				}
			}
		}
	}
	printf("\n%d\n",pos);
	return 0;
}
			
		
