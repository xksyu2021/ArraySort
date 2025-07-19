static int j = 0;
void bubbleSort(float arr[], int length)
{
	while (j < length - 1)
	{
		j = 0;
		for (int i = 0; i < length - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				float temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
			else j++;
		}
	} 
}