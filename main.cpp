#include <iostream>
#include <ctime>
#include "sort_algo.h"
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

};

int main()
{
	unsigned int count;
	cin >> count;
//	char *arr = new char[count]; //one-byte array
//	int *arr = new int[count];
//	TODO: Test string and create algo for structure
//	string *arr = new string[count];
	Date *arr = new Date[count];
	srand(time(nullptr));
	for (unsigned int i = 0; i < count; i++)
	{
//		arr[i] = rand() % 100;
		arr[i].Append(rand() % 31, rand() % 12, rand() % 3000);
//		cout << arr[i] << "|" << (int)(arr[i]) << "\t";
	}
//	quick_sort(arr, 0, count - 1);
	cout << endl;
	for (unsigned int i = 0; i < count; i++)
	{
//		cout << arr[i] << "\t";
		printf("%d:%d:%d\t", arr[i].Day, arr[i].Month, arr[i].Year);
	}
	delete []arr;
	return 0;
}
