
public class LinearSearch 
{
	public static int PosLinear(int searched, int[] arr, int size, int start)
	{
		for(int i = start;i < size; i++)
		{
			if(searched == arr[i])
			{
				return i;
			}
		}
		return -1;
	}
	
	public static int PosLinear(int searched, int[] arr, int size)
	{
		return PosLinear(searched,arr,size,0);
	}
	public static boolean HasLinear(int searched, int[] arr, int size, int start)
	{
		for(int i = start;i < size; i++)
		{
			if(searched == arr[i])
			{
				return true;
			}
		}
		return false;
	}
	
	public static boolean HasLinear(int searched, int[] arr, int size)
	{
		return HasLinear(searched,arr,size,0);
	}
}
