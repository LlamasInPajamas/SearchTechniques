
public class BinarySearch
{
	public static int PosBinary(int searched, int arr[], int start, int end)
	{
		while(start <= end)
		{
			if(arr[(start + end)/2] == searched)
			{
				return (start + end)/2;
			}
			else if(searched > arr[(start + end)/2])
			{
				start = (start + end)/2 + 1;
			}
			else
			{
				end = (start + end)/2 - 1;
			}		
		}
		return -1;
	}
	public static boolean HasBinary(int searched, int arr[], int start, int end)
	{
		while(start <= end)
		{
			if(arr[(start + end)/2] == searched)
			{
				return true;
			}
			else if(searched > arr[(start + end)/2])
			{
				start = (start + end)/2 + 1;
			}
			else
			{
				end = (start + end)/2 - 1;
			}		
		}
		return false;
	}
}
