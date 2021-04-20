//
// Created by Илья on 20.04.2021.
//

#ifndef SORT_RESEARCH_HEAP_SORT_H
#define SORT_RESEARCH_HEAP_SORT_H
#include "base_structure.h"

template <typename T>
static void heapify(T *arr, int node, int size)
{
	int r, l, largest;

	l = 2 * node + 1;
	r = 2 * node + 2;
	largest = node;
	if (l < size && arr[l] > arr[largest])
		largest = l;
	if (r < size && arr[r] > arr[largest])
		largest = r;
	if (largest != node)
	{
		uni_swap(arr[largest], arr[node]);
		heapify(arr, largest, size);
	}
}

template <typename T>
void heap_sort(T *arr, int i, int j)
{
	// max heap
	for (int k = (j - i + 1) / 2 - 1; k >= 0 ; k--)
		heapify(arr, k, j - i + 1);

	// pop
	for (int k = j - i; k >= 0; k--)
	{
		uni_swap(arr[k], arr[0]);
		heapify(arr, 0, k);
	}
}

#endif //SORT_RESEARCH_HEAP_SORT_H
