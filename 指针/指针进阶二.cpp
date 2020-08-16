#include "test.h"

int main()
{
	char a[] = "abcdef";
	printf("%d\n", sizeof(a));//7
	printf("%d\n", sizeof(a + 0));//4
	printf("%d\n", sizeof(*a));//1
	printf("%d\n", sizeof(a[1]));//1
	printf("%d\n", sizeof(&a));//4
	printf("%d\n", sizeof(&a + 1));//4
	printf("%d\n", sizeof(&a[0] + 1));//4

	//printf("%d\n", strlen(a));//x
	//printf("%d\n", strlen(a + 0 ));//x
	////printf("%d\n", strlen(*a));//错误
	////printf("%d\n", strlen(a[1]));//错误
	////printf("%d\n", strlen(&a));//x
	////printf("%d\n", strlen(&a+1));//x-6
	//printf("%d\n", strlen(&a[0] + 1));//x-1

	return 0;
}


//int main()
//{
//	char a[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(a));//6
//	//printf("%d\n", sizeof(a + 0));//4
//	//printf("%d\n", sizeof(*a));//1
//	//printf("%d\n", sizeof(a[1]));//1
//	//printf("%d\n", sizeof(&a));//4
//	//printf("%d\n", sizeof(&a + 1));//4
//	//printf("%d\n", sizeof(&a[0] + 1));//4
//
//	printf("%d\n", strlen(a));//x
//	printf("%d\n", strlen(a + 0 ));//x
//	//printf("%d\n", strlen(*a));//错误
//	//printf("%d\n", strlen(a[1]));//错误
//	//printf("%d\n", strlen(&a));//x
//	//printf("%d\n", strlen(&a+1));//x-6
//	printf("%d\n", strlen(&a[0] + 1));//x-1
//
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16       整个数组大小
//	printf("%d\n", sizeof(a + 0));//4    a是首元素地址，首元素大小
//	printf("%d\n", sizeof(*a));//4       *a 是首元素，首元素大小
//	printf("%d\n", sizeof(a + 1));//4    a[1]的地址
//	printf("%d\n", sizeof(a[1]));//4     a[1]的地址
//	printf("%d\n", sizeof(&a));//4       指针的大小
//	printf("%d\n", sizeof(*&a));//16     
//	printf("%d\n", sizeof(&a + 1));//4   数组的地址加1，依然是个地址
//	printf("%d\n", sizeof(&a[0]));//4    第一个元素的地址
//	printf("%d\n", sizeof(&a[0] + 1));//4    第二个元素的地址
//	return 0;
//}