#include"stdafx.h"
#include <stdio.h>
#include <iostream>



void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;

}

// a function to implement bubble sort
void bubbleSort(int arr[], int n)
{

	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);

		}


	}



}
//function to print array
void printBubbleSortedArray(int arr[], int size)
{
	std::cout << "*****bubble sort*****" << std::endl;
	std::cout << "unsorted{3,1,4,1,5,9,2,6,5}" << std::endl;

	int i;
	for (i = 0; i < size; i++)
		printf("%d", arr[i]);
	std::cout << "number of elements=" << size << std::endl;
}

//driver to test the bubble sort
	int runBubbleSort() 
	{
		int arr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };
		int n = sizeof(arr) / sizeof(arr[0]);
		bubbleSort(arr, n);
		printf("bubble sorted array: \n");
		printBubbleSortedArray(arr, n);
		return 0;

	



}
