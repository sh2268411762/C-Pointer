//#include "test.h"
//
//int cubeByValue(const int n);
//void cubeByReference(int* nptr);
//int main()
//{
//	int num = 5;
//	printf("��������%d\n", num);
//	num = cubeByValue(num);
//	printf("��ֵ���ݣ�%d\n", num);
//
//	num = 5;
//	cubeByReference(&num);//ֱ�Ӹı�n
//	printf("��ַ���ݣ�%d\n", num);
//	return 0;
//}
//
//int cubeByValue(const int n)
//{
//	return n * n * n;
//}
//void cubeByReference(int* nptr)
//{
//	*nptr = *nptr * *nptr * *nptr;
//}