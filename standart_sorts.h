//
// Created by strikez on 18.04.2021.
//

#ifndef SORT_RESEARCH_BUBBLE_SORT_H
#define SORT_RESEARCH_BUBBLE_SORT_H
#include "base_structure.h"

template <typename T>
void bubble_sort(T *arr, unsigned int i, unsigned int j)
{
	for (unsigned int x = i; x < j + 1; x++)
	{
		for (unsigned int z = i; z < j - x; z++) if (arr[z] > arr[z + 1]) uni_swap(arr[z + 1], arr[z]);
	}
}

template <typename T>
void selection_sort(T* arr, unsigned int i, unsigned int j)
{
	unsigned int imin;

	for (unsigned int x = i; x < j; ++x)
	{
		imin = x;
		for (unsigned int z = x + 1; z < j + 1; z++)	if (arr[z] < arr[imin])	imin = z;
		if (imin != x) uni_swap(arr[imin], arr[x]);
	}
}

template <typename T>
void insertion_sort(T* arr, unsigned int i, unsigned int j)
{
	for (unsigned int x = i + 1; x < j + 1; x++)
		for(unsigned int z = x; z > i && arr[z - 1] > arr[z]; z--)
			uni_swap(arr[z - 1], arr[z]);
}

#endif //SORT_RESEARCH_BUBBLE_SORT_H
