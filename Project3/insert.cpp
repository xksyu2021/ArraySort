void insertSort(float arr[], int length)
{
	for (int i = 1; i < length; i++)
	{
		int j = i - 1;
		while(true)
		{
			if (arr[j] > arr[i] && j > 0) j--;
			else if (j == 0) break;
			else { j++; break; }
		}
		for(int k = i; k > j; k--)
		{
			float temp = arr[k];
			arr[k] = arr[k - 1];
			arr[k - 1] = temp;
		}
	}
}