//
// Created by strikez on 19.04.2021.
//

#ifndef SORT_RESEARCH_MERGE_SORT_H
#define SORT_RESEARCH_MERGE_SORT_H
#include "base_structure.h"

template <typename T>
static void copy_array(T* arr, T *buffer, int i, int j)
{
	for (int k = 0; k < j - i + 1; ++k)
	{
		buffer[k] = arr[k + i];
	}
}

template <typename T>
static void merge(T *arr, unsigned int i, unsigned int mid, unsigned int j) {
	unsigned int start1 = i;
	unsigned int start2 = mid + 1;
	T *buffer = new T[j - i + 1];

	copy_array(arr, buffer, i, j);
	for (unsigned int k = i; k < j + 1; ++k)
	{
		if (start1 > mid)
		{
			arr[k] = buffer[start2 - i];
			start2++;
		}
		else if (start2 > j)
		{
			arr[k] = buffer[start1 - i];
			start1++;
		}
		else if (buffer[start1 - i] > buffer[start2 - i])
		{
			arr[k] = buffer[start2 - i];
			start2++;
		}
		else
		{
			arr[k] = buffer[start1 - i];
			start1++;
		}
	}
	delete []buffer;
}

template <typename T>
void merge_sort(T *arr, unsigned int i, unsigned int j)
{
	if (i < j)
	{
		unsigned int mid = (i + j) / 2;
		merge_sort(arr, i, mid);
		merge_sort(arr, mid + 1, j);
		merge(arr, i, mid, j);
	}
}
#endif //SORT_RESEARCH_MERGE_SORT_H
