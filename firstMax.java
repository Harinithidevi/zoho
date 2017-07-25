import java.io.*;

class firstMax
{
	public static void main(String[] args)
	{
		int[] values={1,2,3,4,5,6,7};
		int j =values.length-1;
		int i=0;
		int count=0;
		while(count<values.length)
		{
			System.out.print(+values[j]);
			j--;
			count++;
			if (count<values.length)
			{
				System.out.print(+values[i]);
				i++;
				count++;
			}
		}
	}
}

	
