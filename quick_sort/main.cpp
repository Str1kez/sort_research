#include <iostream>
#include <ctime>
#include "quick_sort.h"
#include <string>

using namespace std;

int main()
{
	unsigned int count;
	cin >> count;
	char *arr = new char[count]; //one-byte array
//	int *arr = new int[count]; // int array
//	string *arr = new string[count]; // string array
//	Date *arr = new Date[count]; // struct array
	srand(time(nullptr));
//	int r;
	for (unsigned int i = 0; i < count; i++)
	{
//		set for strings
//		r = rand() % 100; // strings len < 100
//		for (unsigned int j = 0; j < r; j++)
//		{
//			arr[i].push_back(rand() % 128); // random symbol
//		}
//		arr[i] = rand(); // set values for int
//		arr[i] = rand() % 128; // set values for chars
//		arr[i].Append(rand() % 30 + 1, rand() % 12 + 1, rand() % 3000); // set values for struct
//		cout << arr[i] << "|" << (int)(arr[i]) << "\t"; // prove for chars
//		cout << arr[i] << "\t"; //prove for strings
	}
	clock_t time = clock();
	quick_sort(arr, 0, count - 1); // for chars, strings and ints
	time = clock() - time;
	cout << endl;
	for (unsigned int i = 0; i < count; i++)
	{
		cout << arr[i] << "\t";
//		printf("%d:%d:%d\t", arr[i].Day, arr[i].Month, arr[i].Year);
	}
	printf("\nTime: %f sec", ((float)time) / CLOCKS_PER_SEC);
	delete []arr;
	return 0;
}
