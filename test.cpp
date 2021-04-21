//
// Created by strikez on 18.04.2021.
//

#include "quick_sort.h"
#include "standart_sorts.h"
#include "merge_sort.h"
#include "shell_sort.h"
#include "heap_sort.h"
#include "lsd_sort.h"
#include <iostream>

int main()
{
//	int arr[10] = {10, 9, 3, 4, 2, 1, 6, 3, 12, 10};
	string arr_str[] = {"\nD6kA\u007F\u0006?\u0011sC\u001Fgbp&at\u001F\u001F}p$K\u0003\u0004Z::!|G",
					   "!P3\u0014Kuq)\tg\u000B9\u0015\u0016~\u0013be5j\"/za\u001C",
					   "22&28eC,(b\u0013\nR:kGY\nDJ.\u000FM2i\u0007l\n\u00034o6f\u0015h\u001Fz+K\"\u000E^,`\u0018\u0017'r!l<O{\t\u0002e\u0010no\u0014\"_J\tt2(o]s\u0011kQ>LjU",
					   "ahBJk\u001AN&/\u0014:(J&j%U\u0018T@\u0012unYL\u0018}T\u0017^<Y)'>1B\fXq \u0012\u001Aj9\u0004\u000F\u000E\u001CcN.X<\u0007$U",
					   "\u001F)1\u000F",
					   "q\u00029EjdQ\u0019\u0003\u001C8)\u0015PA!#<WY\u0007\u0001r}a",
					   "v\u0013\u0019\u0010&31B8Gt?p\u0007-yq\u0012;d*bOtd,600/\u0007&B 6hTg*\f/\u001FK\u001F&y\u0018\u0017\u000BS{65J*\u0019v`I&\u000FPL",
					   "ylc5F\f]\u0004=\u001F\u0010\u0015\u00100(*\u001Aa/)oK\f=zey\u0001\tN\u0006\u0002;i8\u0001u\u0015\u000524\u0015HDEpo_Q@i\u0014}cyve\u0003Ek\u0005 T=\u0001IR\u0006{\u0006\u001BCK`3:?\u0004XGDA[A%U",
					   "\nD6kA\u007F\u0006?\u0011sC\u001Fgbp&at\u001F\u001F}p$K\u0003\u0004Z::!|G",
					   "22&28eC,(b\u0013\nR:kGY\nDJ.\u000FM2i\u0007l\n\u00034o6f\u0015h\u001Fz+K\"\u000E^,`\u0018\u0017'r!l<O{\t\u0002e\u0010no\u0014\"_J\tt2(o]s\u0011kQ>LjU"};
//	string arr_str[] = {"prib", "priv", "prib", "prim"};
//	int r;
//	string *arr_str = new string[100];
//	srand(time(nullptr));
//	for (unsigned int i = 0; i < 100; i++)
//	{
//		r = rand() % 100; // strings len < 100
//		for (unsigned int x = 0; x < r; x++)
//		{
//			arr_str[i].push_back(rand() % 28 + 97); // random symbol
//		}
////		arr_int[i] = rand(); // set values for int
////		arr_char[i] = rand() % 128; // set values for chars
////		arr_date[i].Append(rand() % 30 + 1, rand() % 12 + 1, rand() % 3000); // set values for struct
//	}
//	msd_sort_str(arr_str, 0, 9);
	for (int i = 0; i < 10; ++i) cout << arr_str[i] << "\t" << (int)(arr_str[i][0]) << endl;
//	delete []arr_str;
	return 0;
}