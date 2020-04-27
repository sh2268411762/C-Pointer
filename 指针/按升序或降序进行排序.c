//#include "test.h"
//#define SIZE 10
//
//void bubble(int work[], size_t size, int (*compare)(int a, int b));
//int ascending(int a, int b);
//int descending(int a, int b);
//
//int main()
//{
//	int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };//可以自己输入数组元素
//	printf("%s", "Enter 1 to sort in ascending order（1 升序），\nEnter 2 to sort in descending order（2 降序）：\n");
//	int order;
//	scanf("%d", &order);
//
//	puts("\nData items in original");
//
//	for (size_t counter = 0; counter < SIZE; counter++)
//	{
//		printf("%5d", a[counter]);
//	}
//
//	if (1 == order)
//	{
//		bubble(a, SIZE, ascending);
//		puts("\nData items in ascending order（升序）");
//	}
//	else
//	{
//		bubble(a, SIZE, descending);
//		puts("\nData items in descending order（降序）");
//	}
//
//	for (size_t counter = 0; counter < SIZE; counter++)
//	{
//		printf("%5d", a[counter]);
//	}
//
//	puts("");
//	return 0;
//}
//
//void bubble(int work[], size_t size, int(*compare)(int a, int b))//数组，数组大小，指向函数的指针
//{
//	void swap(int* x, int* y);
//
//	for (unsigned int pass = 1; pass < size; pass++)
//	{
//		for (size_t count = 0; count < size - 1; count++)
//		{
//			if ((*compare)(work[count], work[count + 1]))//比较大小
//			{
//				swap(&work[count], &work[count + 1]);
//			}
//		}
//	}
//}
//
//void swap(int* x, int* y)//交换
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int ascending(int a, int b)//升序
//{
//	return b < a;
//}
//
//int descending(int a, int b)//降序
//{
//	return b > a;
//}
