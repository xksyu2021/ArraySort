#include <iostream>
#define LOG(x) std::cout << x << std::endl

void selectSort(float arr[], int length);
void bubbleSort(float arr[], int length);
void insertSort(float arr[], int length);
void quickSort(float arr[], int length);


const int length = 5; //init length HERE
float array[length];
static void init() 
{  
	float temp[length] = {5,3,2,4,1}; //init array HERE
	for(int i=0; i< length; i++)
	{
		array[i] = temp[i];
	}
}
static void output(std::string type)
{
	LOG(type);
	for (int i = 0; i < length ; i++)
	{
		LOG(array[i]);
	}
}

int main()
{
	
	init();
	selectSort(array, length);
	output("selectSort");

	init();
	bubbleSort(array, length);
	output("bubbleSort");

	init();
	insertSort(array, length);
	output("insertSort");

	init();
	quickSort(array, length);
	output("quickSort");
}