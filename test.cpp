//
// Created by strikez on 18.04.2021.
//

#include "quick_sort.h"
#include "standart_sorts.h"
#include <iostream>

int main()
{
	int arr[10] = {10, 9, 3, 4, 2, 1, 6, 3, 12, 10};
	insertion_sort(arr, 0, 9);
	for (int i = 0; i < 10; ++i) cout << arr[i] << endl;
	return 0;
}