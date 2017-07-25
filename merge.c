#include<stdio.h>

int main()
{
	int a[]={2,4,5,6,7,9,10,13} ,b[]={2,3,4,5,6,7,8,9,11,15},i=0,j=0,len1,len2,min,max,count=0;
	len1=sizeof(a)/sizeof(a[0]);
	len2=sizeof(b)/sizeof(b[0]);
	int c[len2+len1];
	
	printf("\nlen2=%d len1=%d\n",len2,len1);
	while(i<len1 && j<len2)
	{
		if(a[i]<b[j])
		{
			c[count]=a[i];
			count++;
			i++;
		}
		else if(a[i]==b[j])
		{
			c[count]=a[i];
			count++;
			i++;
			j++;
		}
		else
		{
			c[count]=b[j];
			j++;
			count++;
		}
	}
	while(i<len1)
	{
		c[count]=a[i];
		i++;
		count++;
	}
	while(j<len2)
	{
		c[count]=b[j];
		j++;
		count++;
	}
	
	for(i=0;i<count;i++)
        {
		printf("%d\t",c[i]);
	}
}
	
	
