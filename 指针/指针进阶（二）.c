//#include "test.h"
//
//
////回调函数
//
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//void Swap(char* b1, char* b2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char temp = *b1;
//		*b1 = *b2;
//		*b2 = temp;
//		b1++;
//		b2++;
//	}
//}
//void bubble_Sort(void* base, int sz, int width, int(*Cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (Cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%4d", arr[i]);
//	}
//	puts("");
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//struct Stu {
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void Test1()
//{
//	struct Stu s[3] = { {"zs",20},{"sh",19},{"wu",67} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//void Test2()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//void Test3()
//{
//	struct Stu s[3] = { {"yx",20},{"sh",19},{"eq",67} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_Sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//int main()
//{
//	Test3();
//	return 0;
//}
////int main()
////{
////	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	bubble_sort(arr,sz);
////	print_arr(arr, sz);
////	return 0;
////}
//
////char* my_strcpy(char* dest, const char* src)//定义一个函数
////{
////	//...
////}
////
////int Add(int x, int y)
////{
////	return x + y;
////}
////int Sub(int x, int y)
////{
////	return x - y;
////}
////
////char* test1(int a, int* b)
////{
////	return NULL;
////}
////char* test2(int a, int* b)
////{
////	return NULL;
////}
////int main()
////{
////	//int arr[10] = { 0 };
////	//int(*parr)[10] = &arr;//parr数组指针
////	//char* (*pfun)(char*, const char*) = my_strcpy;//函数指针
////	////pfun(参数);  //函数指针调用
////	//
////	//int (*pfun[2])(int, int) = { Add,Sub };
////	//int(*(*p)[2]) (int, int) = &pfun;//p是一个指向函数数组的指针
////	char (*pun[2])(int, int*) = { test1,test2 };//函数指针数组
////	char (*(*p1)[2])(int, int*) = &pun;//指向函数指针数组的指针
////	return 0;
////}