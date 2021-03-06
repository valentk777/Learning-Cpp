#include "stdafx.h"
#include "SortAlgorithms.h"
#include "HeapSort.h"
#include "DataStructures.h"
#include "Searchs.h"

int main ()
{

	int arr[] = { 10, 20, 5, 15, 16, 30, 2 };
	int count = sizeof (arr) / sizeof (*arr);
	PrintAll (arr, count);

	/*
	//Sorts
	SelectionSort (arr, count);
	InsertionSort (arr, count);
	BoubleSort (arr, count);
	BoubleSortOptimized (arr, count);
	MergeSort (arr, count);
	QuickSort (arr, count);
	QuickSort_P (arr, count);
	PrintAll (arr, count);
	*/

	/*
	// version 1
	Heap h;
	for (int* i = arr; i < arr + count; i++)
	{
		h.Add (*i);
	}

	h.Heapify ();
	h.PrintAll ();

	// version 2
	Heap h2 (arr, count);
	h2.Heapify ();
	h2.PrintAll ();

	*/

	/*
	//HeapSort
	Heap h (arr, count);
	h.HeapSort ();
	h.PrintAll ();
	*/

	/*
	// stack
	{
		Stack st (10);
		st.Push (15);
		st.Push (150);
		st.PrintAll ();
		//printf ("%d", st.Pop ());
	}

	// queue
	{
		Queue qe (5);
		qe.Enqueue (50);
		qe.Dequeue ();
		qe.PrintAll ();
	}
	*/


	BinarySearchTree bst;
	for (int* i = arr; i < arr + count; i++)
	{
		bst.Add (*i);
	}

	bst.root->PrintNodes ();
	int height = 0;
	bool rez = bst.root->IsBalanced (height);
	printf ("\nBiggest height: %d, %s", height, rez ? "Balanced" : "Is Not Balanced");
	getchar ();
	return 0;
}
