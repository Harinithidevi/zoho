#include <stdio.h>

int main()
{
	int a[]={13,2,4,15,12,10,5};
//	int a[]={1,2,3,4,5,6,7,8,9};
	int len=sizeof(a)/sizeof(a[0]);
	int i,j,pos=0,t=0;
	printf("\nlen=%d\n", len);
	for(i=0;i<len;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i==0)
			{
				if (a[i]>a[j])
                                {
                                        t=a[i];
                                        a[i]=a[j];
                                        a[j]=t;
                                }

			}
			else if(i==len-1)
			{
				if(((i%2==0)&&(j%2==0))||(j==0))
				{
					if (a[i]>a[j])
                                	{
                                        	t=a[i];
                                        	a[i]=a[j];
                                        	a[j]=t;
                                	}
				}
				else
				{
					if (a[i]>a[j])
                                	{
                                        	t=a[i];
                                        	a[i]=a[j];
                                        	a[j]=t;
                                	}
				}

			}
			else if((i%2==0) && (i>0) &&(j%2==0) && (j>0))
			{
				if (a[i]>a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
			else if((j%2!=0) &&(i%2!=0))
			{
				if(a[i]<a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
}
			
