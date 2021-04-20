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
	for (int k = i; k < j - i + 1; k++)
	{
		if (arr[k] / mul) hdigit = true;
		a[(arr[k] / mul) % 10].push_back(arr[k]);
	}

	for (int k = 0; k < 10; k++)
	{
		for (auto el : a[k])

		printf("\n");
	}

}
#endif //SORT_RESEARCH_LSD_SORT_H
