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
	////printf("%d\n", strlen(*a));//����
	////printf("%d\n", strlen(a[1]));//����
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
//	//printf("%d\n", strlen(*a));//����
//	//printf("%d\n", strlen(a[1]));//����
//	//printf("%d\n", strlen(&a));//x
//	//printf("%d\n", strlen(&a+1));//x-6
//	printf("%d\n", strlen(&a[0] + 1));//x-1
//
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16       ���������С
//	printf("%d\n", sizeof(a + 0));//4    a����Ԫ�ص�ַ����Ԫ�ش�С
//	printf("%d\n", sizeof(*a));//4       *a ����Ԫ�أ���Ԫ�ش�С
//	printf("%d\n", sizeof(a + 1));//4    a[1]�ĵ�ַ
//	printf("%d\n", sizeof(a[1]));//4     a[1]�ĵ�ַ
//	printf("%d\n", sizeof(&a));//4       ָ��Ĵ�С
//	printf("%d\n", sizeof(*&a));//16     
//	printf("%d\n", sizeof(&a + 1));//4   ����ĵ�ַ��1����Ȼ�Ǹ���ַ
//	printf("%d\n", sizeof(&a[0]));//4    ��һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0] + 1));//4    �ڶ���Ԫ�صĵ�ַ
//	return 0;
//}