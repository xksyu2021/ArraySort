#include <iostream>
#define LOG(x) std::cout << x << std::endl

void selectSort(float arr[], int length);

int main()
{
	float array[5] = { 5,3,2,4,1 };
	selectSort(array, 5);
}