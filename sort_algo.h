//
// Created by strikez on 13.04.2021.
//

#ifndef SORT_RESEARCH_SORT_ALGO_H
#define SORT_RESEARCH_SORT_ALGO_H
template <typename T>
void swap(T &a, T &b)
{
	int temp = a;
	a = b;
	b = temp;
}

template <typename T>
int find_pivot(T *arr, unsigned int i, unsigned int j)
{
	for(unsigned int k = i + 1;  k <= j; k++)
	{
		if (arr[i] < arr[k]) return k;
		else if (arr[i] > arr[k]) return i;
	}
	return -1;
}

template <typename T>
unsigned int partition(T *arr, unsigned int i, unsigned int j, int pivot)
{
	unsigned int l, r;
	l = i;
	r = j;
	do
	{
		while (arr[l] < pivot) l++;
		while (arr[r] >= pivot) r--;
		if (l < r) swap(arr[l], arr[r]);
	} while (l < r);
	return l;
}

template <typename T>
void quick_sort(T *arr, unsigned int i, unsigned int j)
{
	int pivot = find_pivot(arr, i, j);
	if (pivot == -1) return;
	unsigned int k = partition(arr, i, j, arr[pivot]);
	quick_sort(arr, i, k - 1);
	quick_sort(arr, k, j);
}
#endif //SORT_RESEARCH_SORT_ALGO_H
