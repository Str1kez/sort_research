//
// Created by strikez on 13.04.2021.
//

#ifndef SORT_RESEARCH_QUICK_SORT_H
#define SORT_RESEARCH_QUICK_SORT_H
#include <string>

using namespace std;

struct Date
{
	int Day;
	int Month;
	int Year;
	void Append(int d, int m, int y)
	{
		this->Day = d;
		this->Month = m;
		this->Year = y;
	}
	friend bool operator <(const Date &a, const Date &b);
	friend bool operator >(const Date &a, const Date &b);
	friend bool operator >=(const Date &a, const Date &b);
};

bool operator<(const Date &a, const Date &b)
{
	if (a.Year > b.Year) return false;
	if (a.Year < b.Year) return true;
	if (a.Month > b.Month) return false;
	if (a.Month < b.Month) return true;
	if (a.Day > b.Day) return false;
	if (a.Day < b.Day) return true;
	return false;
}

bool operator>(const Date &a, const Date &b)
{
	if (a.Year < b.Year) return false;
	if (a.Year > b.Year) return true;
	if (a.Month < b.Month) return false;
	if (a.Month > b.Month) return true;
	if (a.Day < b.Day) return false;
	if (a.Day > b.Day) return true;
	return false;
}

bool operator>=(const Date &a, const Date &b)
{
	return !(a < b);
}

template <typename T>
void uni_swap(T &a, T &b)
{
	T temp = a;
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
unsigned int partition(T *arr, unsigned int i, unsigned int j, T pivot)
{
	unsigned int l, r;
	l = i;
	r = j;
	do
	{
		while (arr[l] < pivot) l++;
		while (arr[r] >= pivot) r--;
		if (l < r) uni_swap(arr[l], arr[r]);
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

#endif //SORT_RESEARCH_QUICK_SORT_H
