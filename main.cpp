#include <iostream>
#include <ctime>
#include "quick_sort_sym.h"
#include "quick_sort_structure.h"
#include <string>

using namespace std;

int main()
{
	unsigned int count;
	cin >> count;
//	char *arr = new char[count]; //one-byte array
//	int *arr = new int[count]; // int array
//	TODO: Test string
	string *arr = new string[count]; // string array
//	Date *arr = new Date[count]; // struct array
	srand(time(nullptr));
	for (unsigned int i = 0; i < count; i++)
	{
		cin >> arr[i]; // set values for strings
//		arr[i] = rand() % 100; // set values for int
//		arr[i] = rand() % 128; // set values for chars
//		arr[i].Append(rand() % 30 + 1, rand() % 12 + 1, rand() % 3000); // set values for struct
//		cout << arr[i] << "|" << (int)(arr[i]) << "\t"; // prove for chars
	}
//	quick_sort_sym(arr, 0, count - 1); // for chars and ints
//	quick_sort_structure(arr, 0, count -1);
	cout << endl;
	for (unsigned int i = 0; i < count; i++)
	{
		cout << arr[i] << "\t";
//		printf("%d:%d:%d\t", arr[i].Day, arr[i].Month, arr[i].Year);
	}
	delete []arr;
	return 0;
}
