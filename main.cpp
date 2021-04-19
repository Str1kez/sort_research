#include <ctime>
#include "quick_sort.h"
//#include "merge_sort.h"
//#include "standart_sorts.h"
#include "shell_sort.h"

using namespace std;

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
			r = rand() % 100; // strings len < 100
			for (unsigned int x = 0; x < r; x++)
			{
				arr_str[i].push_back(rand() % 128); // random symbol
			}
			arr_int[i] = rand(); // set values for int
			arr_char[i] = rand() % 128; // set values for chars
			arr_date[i].Append(rand() % 30 + 1, rand() % 12 + 1, rand() % 3000); // set values for struct
		}

		time_char = clock();
		shell_sort_advanced(arr_char, 0, j - 1);
		time_char = clock() - time_char;
		printf("\tTime for %d elements chars: %f sec\n", j, ((float)time_char) / CLOCKS_PER_SEC);
		time_int = clock();
		shell_sort_advanced(arr_int, 0, j - 1);
		time_int = clock() - time_int;
		printf("\tTime for %d elements ints: %f sec\n", j, ((float)time_int) / CLOCKS_PER_SEC);
		time_str = clock();
		shell_sort_advanced(arr_str, 0, j - 1);
		time_str = clock() - time_str;
		printf("\tTime for %d elements strings: %f sec\n", j, ((float)time_str) / CLOCKS_PER_SEC);
		time_date = clock();
		shell_sort_advanced(arr_date, 0, j - 1);
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
			r = rand() % 100; // strings len < 100
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
		shell_sort_advanced(arr_char, 0, j - 1);
		time_char = clock() - time_char;
		printf("\tTime for %d elements chars: %f sec\n", j, ((float)time_char) / CLOCKS_PER_SEC);
		time_int = clock();
		shell_sort_advanced(arr_int, 0, j - 1);
		time_int = clock() - time_int;
		printf("\tTime for %d elements ints: %f sec\n", j, ((float)time_int) / CLOCKS_PER_SEC);
		time_str = clock();
		shell_sort_advanced(arr_str, 0, j - 1);
		time_str = clock() - time_str;
		printf("\tTime for %d elements strings: %f sec\n", j, ((float)time_str) / CLOCKS_PER_SEC);
		time_date = clock();
		shell_sort_advanced(arr_date, 0, j - 1);
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
			r = rand() % 100; // strings len < 100
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
		shell_sort_advanced(arr_char, 0, j - 1);
		time_char = clock() - time_char;
		printf("\tTime for %d elements chars: %f sec\n", j, ((float)time_char) / CLOCKS_PER_SEC);
		time_int = clock();
		shell_sort_advanced(arr_int, 0, j - 1);
		time_int = clock() - time_int;
		printf("\tTime for %d elements ints: %f sec\n", j, ((float)time_int) / CLOCKS_PER_SEC);
		time_str = clock();
		shell_sort_advanced(arr_str, 0, j - 1);
		time_str = clock() - time_str;
		printf("\tTime for %d elements strings: %f sec\n", j, ((float)time_str) / CLOCKS_PER_SEC);
		time_date = clock();
		shell_sort_advanced(arr_date, 0, j - 1);
		time_date = clock() - time_date;
		printf("\tTime for %d elements structures: %f sec\n\n", j, ((float)time_date) / CLOCKS_PER_SEC);
	}
}
