//
// Created by Илья on 20.04.2021.
//

#ifndef SORT_RESEARCH_LSD_SORT_H
#define SORT_RESEARCH_LSD_SORT_H
#include "base_structure.h"
#include <vector>
#include <array>

using namespace std;
template <typename T>
void lsd_sort(T *arr, int i, int j, int mul=1)
{
	array<vector<int>, 10> a;
	bool hdigit;
	int iter;

	for (int k = i; k < j - i + 1; k++)
	{
		if (arr[k] / mul / 10) hdigit = true;
		a[(arr[k] / mul) % 10].push_back(arr[k]);
	}
	iter = i;
	for (int k = 0; k < 10; k++)
	{
		for (auto el : a[k])
		{
			arr[iter++] = el;
		}
	}
	if (hdigit)
		lsd_sort(arr, i, j, mul * 10);
}

// TODO: Doesn't work
//void msd_sort_str(string *arr, int i, int j, int delta=0)
//{
//	array<vector<string>, 128> a;
//	int iter = i;
//	int len;
//
//	for (int k = 0; k < j - i + 1; k++)
//	{
//		len = arr[k].length();
//		if (len - 1 >= delta)
//			a[arr[k][delta]].push_back(arr[k]);
//		else
//			a[0].push_back(arr[k]);
//	}
//	for (int k = 0; k < 128; k++)
//	{
//		len = a[k].size();
//		if (len > 1 && k != 0)
//		{
//			int step = iter;
//			for (auto el : a[k])
//				arr[step++] = el;
//			msd_sort_str(arr, iter, step - 1, delta + 1);
//			iter = step;
//		}
//		else if (!a[k].empty())
//			for (auto el : a[k])
//				arr[iter++] = el;
//	}
//}
#endif //SORT_RESEARCH_LSD_SORT_H
