import java.io.*;
import java.util.*;

class weight
{
	public static void main(String[] args)
	{
		Scanner scanner=new Scanner(System.in);
		int[] values = {10, 36, 54, 89, 12};
		int i,j;
		int temp=0, temp2=0;
		int size = values.length;
		int[] wei =new int[size];
		int square= 0,weight=0;
		System.out.println("size:"+size);
		for (i=0;i<values.length;i++)
		{
			weight=0;
			square = (int) Math.sqrt(values[i]);
			if (square * square ==values[i])
			{
				weight+=5;
			}
			if (values[i]%4==0 && values[i]%6==0)
			{
				weight+=7;
			}
			else if(values[i]%2==0)
			{
				weight+=3;
			}
			wei[i]=weight;
			System.out.printf("<%d,%d>", values[i],weight);
		}	
		for (i=0;i<values.length-1;i++)
		{
			for(j=0; j<(values.length-i-1);j++)
			{
				if(wei[j] > wei[j+1])
				{
					temp = wei[j];
					wei[j]=wei[j+1];
					wei[j+1]=temp;
					temp2 = values[j];
					values[j]=values[j+1];
					values[j+1]=temp2;
				}
				if(j+1==4)
				{
					System.out.printf("inside");
				}
			}
		} 
		System.out.println("\nafter sorting\n");
		for(i=0;i<values.length;i++)
		{
			System.out.printf("<%d,%d>",values[i],wei[i]);
		}
	}
}	
