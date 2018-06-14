// Learning-Cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SortAlgorithms.h"
#include "HeapSort.h"

int main ()
{
	//int arr[] = { 1, 8, 9, 11, 7, 6, 10, 4, 2, 3, 1100, 9, 5, 11, 1 };
	int arr[] = { 100, 10, 90, 1, 2, 70, 60 };
	int count = sizeof (arr) / sizeof (*arr);

	PrintAll (arr, count);
	//SelectionSort (arr, count);
	//InsertionSort (arr, count);
	//BoubleSort (arr, count);
	//BoubleSortOptimized (arr, count);
	//MergeSort (arr, count);
	//QuickSort (arr, count);
	//QuickSort_P (arr, count);
	//PrintAll (arr, count);

	/*Heap h;
	h.Add (5);
	h.Add (1500);
	h.Heapify ();
	h.PrintAll ();
	Heap h2 (arr, count);
	h2.Heapify ();
	h2.PrintAll ();*/
	Heap h (arr, count);
	h.HeapSort ();
	h.PrintAll ();

	getchar ();
	return 0;
}
