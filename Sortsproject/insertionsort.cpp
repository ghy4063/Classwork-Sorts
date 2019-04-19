#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
/*function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {

		key = arr[i];
		j = i - 1;

		/* move element of arr[0..i-1], that are greater than key, to one posisiotn ahead of their current position*/
		while (j >= 0 && arr[j] > key) 
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j = j - 1] = key;
	}





}
//a utility function to print an array size size
//We are done sorting at this point
void printInsertionSortedArray(int arr[], int size)
{
	std::cout << "insertion sort"<<std::endl;

	std::cout << "unsorted{12,11,13,5,6}" << std::endl;

	int i;
	for (i = 0; i < size; i++) 
	{
		printf("%d ", arr[i]);

	}
	printf("\n");
	std::cout << "Number of elements =" << size << std::endl;


}

//Driver to test insertion sort functions
//todo make this public and change this on
void runInsertionSort()
{
	int arr[] = { 12,11,13,5,6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	insertionSort(arr, n);
	printf("Insertion sorted array: \n");
	printInsertionSortedArray(arr, n);
	return;



}

