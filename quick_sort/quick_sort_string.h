//
// Created by strikez on 15.04.2021.
//

#ifndef SORT_RESEARCH_QUICK_SORT_STRING_H
#define SORT_RESEARCH_QUICK_SORT_STRING_H
#include <string>

using namespace std;
void static swap(string &a, string &b)
{
	string temp = a;
	a = b;
	b = temp;
}

int static find_pivot(string *arr, unsigned int i, unsigned int j)
{
	for(unsigned int k = i + 1;  k <= j; k++)
	{
		if (arr[i] < arr[k]) return k;
		else if (arr[i] > arr[k]) return i;
	}
	return -1;
}

unsigned int static partition(string *arr, unsigned int i, unsigned int j, string pivot)
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

void static quick_sort_string(string *arr, unsigned int i, unsigned int j)
{
	int pivot = find_pivot(arr, i, j);
	if (pivot == -1) return;
	unsigned int k = partition(arr, i, j, arr[pivot]);
	quick_sort_string(arr, i, k - 1);
	quick_sort_string(arr, k, j);
}
#endif //SORT_RESEARCH_QUICK_SORT_STRING_H
