//#include "test.h"
//
//#define SIZE 4
//int main()
//{
//	int b[] = { 10,20,30,40 };
//	int* bPtr = b;//����һ��ָ������b��ָ��
//	printf("Array b printed with��\nArray index notation\n");//������������
//
//	size_t i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("b[%u] = %d\n", i, b[i]);
//	}
//
//	puts("");
//	printf("Pointer/offset notation where\n");//ָ���������
//	printf("the Poiner is the array name\n");//ָ����������
//
//	size_t offset = 0;
//	for (offset = 0; offset < SIZE; offset++)
//	{
//		printf("*(b + %u) = %d\n", offset, *(b + offset));
//	}
//
//	puts("");
//	puts("Pointer index notation");//ָ����������
//
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("bPtr[%u] = %d\n", i, bPtr[i]);
//	}
//
//	puts("\nPointer/offset notation");
//
//	for (offset = 0; offset < SIZE; offset++)
//	{
//		printf("*(bPtr + %u) = %d\n", offset, *(bPtr + offset));
//	}
//
//	return 0;
//}
