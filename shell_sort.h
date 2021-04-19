//
// Created by strikez on 19.04.2021.
//

#ifndef SORT_RESEARCH_SHELL_SORT_H
#define SORT_RESEARCH_SHELL_SORT_H
#include "base_structure.h"
#include <cmath>

template <typename T>
void shell_sort(T *array, unsigned int i, unsigned int j)
{
	for (unsigned int s = (j - i + 1) / 2; s > 0; s /= 2)
		for (unsigned int x = 0; x < (j - i + 1); x++)
			for (unsigned int z = x + s; z < (j - i + 1); z += s)
				if (array[x] > array[z])
					uni_swap(array[x], array[z]);
}

static int increment(int* inc, unsigned int size)
{
	int mul1, mul2, s;

	mul1 = mul2 = 1;
	s = 0;
	do
	{
		if (s % 2)
			inc[s] = 8 * mul1 - 6 * mul2 + 1;
		else
		{
			inc[s] = 9 * mul1 - 9 * mul2 + 1;
			mul2 *= 2;
		}
		mul1 *= 2;
	} while (3 * inc[s++] < size);
	return s > 0 ? s - 2 : 0;
}

// Shell sort Sedgewick
template <typename T>
void shell_sort_advanced(T *array, int i, int j)
{
	int seq[50];
	int s, inc;

	s = increment(seq, j - i + 1);
	while (s >= 0)
	{
		inc = seq[s--];
		// insertion sort with increments
		for (int k = i + inc; k < j - i + 1; k++)
			for (int l = k - inc; (l >= i) && (array[l] > array[l + inc]); l -= inc)
				uni_swap(array[l], array[l + inc]);
	}
}

#endif //SORT_RESEARCH_SHELL_SORT_H
