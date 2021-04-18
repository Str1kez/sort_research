//
// Created by strikez on 18.04.2021.
//

#ifndef SORT_RESEARCH_BASE_STRUCTURE_H
#define SORT_RESEARCH_BASE_STRUCTURE_H
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

bool operator<=(const Date &a, const Date &b)
{
	return !(a > b);
}

template <typename T>
void uni_swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

#endif //SORT_RESEARCH_BASE_STRUCTURE_H
