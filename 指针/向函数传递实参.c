//#include "test.h"
//
//int cubeByValue(const int n);
//void cubeByReference(int* nptr);
//int main()
//{
//	int num = 5;
//	printf("操作数是%d\n", num);
//	num = cubeByValue(num);
//	printf("按值传递：%d\n", num);
//
//	num = 5;
//	cubeByReference(&num);//直接改变n
//	printf("按址传递：%d\n", num);
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