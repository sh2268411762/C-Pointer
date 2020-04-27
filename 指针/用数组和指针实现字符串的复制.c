//#include "test.h"
//
//#define SIZE 10
//
//void copy1(char* const s1, const char* const s2);
//void copy2(char* s1, const char* s2);
//int main()
//{
//	char str1[SIZE];//创建数组
//	char* str2 = "HELLO";//创建指针
//	copy1(str1, str2);
//	printf("str1 = %s\n", str1);
//
//	char str3[SIZE];
//	char* str4 = "Good Bye";
//	copy2(str3, str4);
//	printf("str3 = %s\n", str3);
//
//	return 0;
//}
//
//void copy1(char* const s1, const char* const s2)
//{
//	for (size_t i = 0; (s1[i] = s2[i]) != '\0'; i++)
//	{
//		;//不用管
//	}
//}
//
//void copy2(char* s1, const char* s2)
//{
//	for (; (*s1 = *s2) != '\0'; s1++, s2++)
//	{
//		;
//	}
//}
