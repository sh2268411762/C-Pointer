//#include "test.h"
//#define SIZE 20
//
//
//size_t getSize(float* ptr);
//int main()
//{
//	float arr[SIZE];
//	printf("�������ֽ�����%d\n", sizeof(arr));
//	printf("ָ���ֽ�����%d\n", getSize(arr));
//
//
//	//ʹ��sizeof��ȷ����׼�������͵Ĵ�С
//	char c;//1 1
//	short s;//2 2
//	int i;//4 4
//	long l;//4 4
//	long long ll;//8 8
//	float f;//4 4
//	double d;//8 8
//	long double ld;//8 8
//	int a[20];//����һ��20��Ԫ�ص�����  //80 = 20 * 4
//	int* ptr = a;//����һ��ָ������a��ָ��  //4
//
//	printf("sizeof c = %u\tsizeof(char) = %u\nsizeof s = %u\tsizeof(short) = %u\nsizeof i = %u\tsizeof(int) = %u\nsizeof l = %u\tsizeof(long) = %u\nsizeof ll = %u\tsizeof(long long) = %u\nsizeof f = %u\tsizeof(float) = %u\nsizeof d = %u\tsizeof(double) = %u\nsizeof ld = %u\tsizeof(long double) = %u\nsizeof a = %u\nsizeof ptr = %u\n", sizeof c, sizeof(char), sizeof s, sizeof(short), sizeof i, sizeof(int), sizeof l, sizeof(long), sizeof ll, sizeof(long long), sizeof f, sizeof(float), sizeof d, sizeof(double), sizeof ld, sizeof(long double), sizeof a, sizeof ptr);
//
//
//
//	return 0;
//}
//size_t getSize(float* ptr)
//{
//	return sizeof(ptr);
//}