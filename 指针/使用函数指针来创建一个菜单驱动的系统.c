//#include "test.h"
//
//void Fun1(int a);
//void Fun2(int b);
//void Fun3(int c);
//int main()
//{
//	void (*f[3])(int) = { Fun1,Fun2,Fun3 };
//
//	printf("请输入（0,1,2）之间的1个数字（输入3结束）：-->");
//	size_t choice;
//	scanf("%u", &choice);
//
//	while (choice >= 0 && choice < 3)
//	{
//		(*f[choice])(choice);
//
//		printf("请输入（0,1,2）之间的1个数字：-->");
//		scanf("%u", &choice);
//	}
//
//	puts("Program execution completed.");
//	return 0;
//}
//
//void Fun1(int a)
//{
//	printf("aaaaaaaaaaaaaa\n");
//}
//
//void Fun2(int b)
//{
//	printf("bbbbbbbbbbbbbbb\n");
//}
//
//void Fun3(int c)
//{
//	printf("cccccccccc\n");
//}
