#include <ctime>
#include "quick_sort.h"
#include <cstdlib>
//#include "merge_sort.h"
//#include "standart_sorts.h"
//#include "lsd_sort.h"
//#include "msd_str_sort.h"
//#include "shell_sort.h"
//#include "heap_sort.h"

using namespace std;

// block for comparison funcs for qsort
int comparison_char(const void *a, const void *b)
{
	return *(char *)a - *(char *)b;
}

int comparison_int(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int comparison_str(const void *a, const void *b)
{
	if (*(string *)a > *(string *)b)
		return 1;
	if (*(string *)a < *(string *)b)
		return -1;
	return 0;
}

int comparison_date(const void *a, const void *b)
{
	if (*(Date *)a > *(Date *)b)
		return 1;
	if (*(Date *)a < *(Date *)b)
		return -1;
	return 0;
}

void random_test(char *arr_char, int *arr_int, string *arr_str, Date *arr_date);
void first_half_sorted_test(char *arr_char, int *arr_int, string *arr_str, Date *arr_date);
void reverse_sorted_test(char *arr_char, int *arr_int, string *arr_str, Date *arr_date);

int main()
{
	char arr_char[1000000]; //one-byte array
	int arr_int[1000000]; // int array
	string *arr_str = new string[1000000]; // string array
	Date *arr_date = new Date[1000000]; // struct array

	// tests
//	random_test(arr_char, arr_int, arr_str, arr_date);
//	first_half_sorted_test(arr_char, arr_int, arr_str, arr_date);
//	reverse_sorted_test(arr_char, arr_int, arr_str, arr_date);

	delete []arr_date;
	delete []arr_str;
	return 0;
}

void random_test(char *arr_char, int *arr_int, string *arr_str, Date *arr_date)
{
	srand(time(nullptr));
	int r;
	clock_t time_char, time_int, time_str, time_date;


	for (unsigned int j = 10; j < 1000001; j *= 10)
	{
		for (unsigned int i = 0; i < j; i++) {
			r = 50; // strings len < 100 (rand % 100)
			arr_str[i].clear();
			arr_str[i].shrink_to_fit();
			for (unsigned int x = 0; x < r; x++)
			{
				arr_str[i].push_back(rand() % 128); // random symbol
			}
			arr_int[i] = rand(); // set values for int
			arr_char[i] = rand() % 128; // set values for chars
			arr_date[i].Append(rand() % 30 + 1, rand() % 12 + 1, rand() % 3000); // set values for struct
		}

		time_char = clock();
		qsort(arr_char, j, sizeof(char), comparison_char);
		time_char = clock() - time_char;
		printf("\tTime for %d elements chars: %f sec\n", j, ((float)time_char) / CLOCKS_PER_SEC);

		time_int = clock();
		qsort(arr_int, j, sizeof(int), comparison_int);
		time_int = clock() - time_int;
		printf("\tTime for %d elements ints: %f sec\n", j, ((float)time_int) / CLOCKS_PER_SEC);
/*		// for msd
		StringItem* pList = nullptr;
		StringItem** ppCurr = &pList;
		for (unsigned int i = 0 ; i < j; i++)
		{
			*ppCurr = new StringItem();
			(*ppCurr )->str = arr_str[i].c_str();
			(*ppCurr )->next = nullptr;
			ppCurr = &(*ppCurr)->next;
		}
*/
		time_str = clock();
//		pList = radix_sort_msd_for_string(pList, 0);
		qsort(arr_str, j, sizeof(string), comparison_str);
		time_str = clock() - time_str;
		printf("\tTime for %d elements strings: %f sec\n", j, ((float)time_str) / CLOCKS_PER_SEC);
//		cleaning
//		while (pList)
//		{
//			StringItem *help = pList;
//			pList = pList->next;
//			delete help;
//		}
//
		time_date = clock();
		qsort(arr_date, j, sizeof(Date), comparison_date);
		time_date = clock() - time_date;
		printf("\tTime for %d elements structures: %f sec\n\n", j, ((float)time_date) / CLOCKS_PER_SEC);
	}
}

void first_half_sorted_test(char *arr_char, int *arr_int, string *arr_str, Date *arr_date)
{
	srand(time(nullptr));
	int r;
	clock_t time_char, time_int, time_str, time_date;


	for (unsigned int j = 10; j < 1000001; j *= 10)
	{
		for (unsigned int i = 0; i < j; i++)
		{
			r = 50; // strings len < 100
			arr_str[i].clear();
			arr_str[i].shrink_to_fit();
			for (unsigned int x = 0; x < r; x++)
			{
				arr_str[i].push_back(rand() % 128); // random symbol
			}
			arr_int[i] = rand(); // set values for int
			arr_char[i] = rand() % 128; // set values for chars
			arr_date[i].Append(rand() % 30 + 1, rand() % 12 + 1, rand() % 3000); // set values for struct
		}

		// sort first half
		quick_sort(arr_char, 0, (j / 2));
		quick_sort(arr_int, 0, (j / 2));
		quick_sort(arr_str, 0, (j / 2));
		quick_sort(arr_date, 0, (j / 2));

		time_char = clock();
		qsort(arr_char, j, sizeof(char), comparison_char);
		time_char = clock() - time_char;
		printf("\tTime for %d elements chars: %f sec\n", j, ((float)time_char) / CLOCKS_PER_SEC);

		time_int = clock();
		qsort(arr_int, j, sizeof(int), comparison_int);
		time_int = clock() - time_int;
		printf("\tTime for %d elements ints: %f sec\n", j, ((float)time_int) / CLOCKS_PER_SEC);
//		for msd
//		StringItem* pList = nullptr;
//		StringItem** ppCurr = &pList;
//		for (unsigned int i = 0 ; i < j; i++)
//		{
//			*ppCurr = new StringItem();
//			(*ppCurr )->str = arr_str[i].c_str();
//			(*ppCurr )->next = nullptr;
//			ppCurr = &(*ppCurr)->next;
//		}
//
		time_str = clock();
//		pList = radix_sort_msd_for_string(pList, 0);
		qsort(arr_str, j, sizeof(string), comparison_str);
		time_str = clock() - time_str;
		printf("\tTime for %d elements strings: %f sec\n", j, ((float)time_str) / CLOCKS_PER_SEC);
//		cleaning
//		while (pList)
//		{
//			StringItem *help = pList;
//			pList = pList->next;
//			delete help;
//		}
//
		time_date = clock();
		qsort(arr_date, j, sizeof(Date), comparison_date);
		time_date = clock() - time_date;
		printf("\tTime for %d elements structures: %f sec\n\n", j, ((float)time_date) / CLOCKS_PER_SEC);
	}
}

void reverse_sorted_test(char *arr_char, int *arr_int, string *arr_str, Date *arr_date)
{
	srand(time(nullptr));
	int r;
	clock_t time_char, time_int, time_str, time_date;


	for (unsigned int j = 10; j < 1000001; j *= 10)
	{
		for (unsigned int i = 0; i < j; i++) {
			r = 50; // strings len < 100
			arr_str[i].clear();
			arr_str[i].shrink_to_fit();
			for (unsigned int x = 0; x < r; x++)
			{
				arr_str[i].push_back(rand() % 128); // random symbol
			}
			arr_int[i] = rand() % 100000; // set values for int
			arr_char[i] = rand() % 128; // set values for chars
			arr_date[i].Append(rand() % 30 + 1, rand() % 12 + 1, rand() % 3000); // set values for struct
		}
		reverse_quick_sort(arr_char, 0, j - 1);
		reverse_quick_sort(arr_int, 0, j - 1);
		reverse_quick_sort(arr_str, 0, j - 1);
		reverse_quick_sort(arr_date, 0, j - 1);

		time_char = clock();
		qsort(arr_char, j, sizeof(char), comparison_char);
		time_char = clock() - time_char;
		printf("\tTime for %d elements chars: %f sec\n", j, ((float)time_char) / CLOCKS_PER_SEC);

		time_int = clock();
		qsort(arr_int, j, sizeof(int), comparison_int);
		time_int = clock() - time_int;
		printf("\tTime for %d elements ints: %f sec\n", j, ((float)time_int) / CLOCKS_PER_SEC);
//		for msd
//		StringItem* pList = nullptr;
//		StringItem** ppCurr = &pList;
//		for (unsigned int i = 0 ; i < j; i++)
//		{
//			*ppCurr = new StringItem();
//			(*ppCurr )->str = arr_str[i].c_str();
//			(*ppCurr )->next = nullptr;
//			ppCurr = &(*ppCurr)->next;
//		}
//
		time_str = clock();
//		pList = radix_sort_msd_for_string(pList, 0);
		qsort(arr_str, j, sizeof(string), comparison_str);
		time_str = clock() - time_str;
		printf("\tTime for %d elements strings: %f sec\n", j, ((float)time_str) / CLOCKS_PER_SEC);
//		cleaning
//		while (pList)
//		{
//			StringItem *help = pList;
//			pList = pList->next;
//			delete help;
//		}
//
		time_date = clock();
		qsort(arr_date, j, sizeof(Date), comparison_date);
		time_date = clock() - time_date;
		printf("\tTime for %d elements structures: %f sec\n\n", j, ((float)time_date) / CLOCKS_PER_SEC);
	}
}
