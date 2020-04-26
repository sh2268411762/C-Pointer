//#include "test.h"
//
//#define SIZE 10
//
//void bubbleSort(int *const a, const size_t size);
//int main()
//{
//	int arr[SIZE] = { 0 };
//	size_t i = 0;
//	printf("输入数组（10个元素）：-->");
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("Date items in original order\n");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%4d", arr[i]);
//	}
//
//	bubbleSort(arr, SIZE);
//
//	printf("\nData items in ascending order\n");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%4d", arr[i]);
//	}
//	puts("");
//	return 0;
//}
//
//void bubbleSort(int* const a,const size_t size)
//{
//	void Swap(int* x, int* y);
//
//	unsigned int pass = 0;
//	for (pass = 0; pass < size - 1; pass++)
//	{
//		size_t j = 0;
//		for (j = 0; j < size - 1 - pass; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				Swap(&a[j], &a[j + 1]);//显示的传递这些数组的元素
//				//int temp = a[j];
//				//a[j] = a[j + 1];
//				//a[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void Swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}