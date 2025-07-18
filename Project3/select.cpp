#include <iostream>

void selectSort(float arr[], int length)
{
 	for (int i = 0; i < length - 1; i++)
	{
		int min = i;
		for (int j = i+1; j < length; j++)
		{
			if (arr[j] < arr[min]) min = j;
		}
		float temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}