//#include "test.h"
//
//void print(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%4d", arr[i][j]);
//		}
//		puts("");
//	}
//}
//void print1(int (*arr)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%4d", *(*(arr + i) + j));
//		}
//		puts("");
//	}
//}
//void Test()
//{
//	printf("hehe\n");
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//void menu()
//{
//	printf("1.加 2.减 3.乘 4.除 0.退出\n");
//}
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数：-->");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//enum Option
//{
//	EXIT,//0
//	ADD,//1
//	SUB,//2
//	MUL,//3
//	DIV//4
//};
//int main()
//{
//	//char arr1[] = "abcdef";
//	//char arr2[] = "abcdef";
//	////
//	//char* p1 = "abcdef";
//	//char* p2 = "abcdef";
//
//	//printf("字符串比较使用strcmp\n");
//	//if (arr1 == arr2)
//	//{
//	//	printf("arr1 == arr2\n");
//	//}
//	//if (strcmp(arr1,arr2) == 0)
//	//{
//	//	printf("arr1 == arr2（strcmp）\n");
//	//}
//	//if (p1 == p2)
//	//{
//	//	printf("p1 == p2\n");
//	//}
//
//	//int* arr[5];//指针数组：存放整型指针的数组
//	//int(*p2)[10] = &arr;//数组指针：*先与p2结合，说明p2是一个指针变量，指向数组
//
//	//int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	//print(arr, 3, 5);
//	//puts("");
//	//print1(arr, 3, 5);
//
//	//printf("0x%p\n", &Test);//可以取出函数的地址，说明函数也有地址
//	//printf("0x%p\n", Test);
//	////(*Test)();//函数名就是函数的地址，可以解引用
//	//Test();
//
//	//函数指针
//	//int(*p)(int, int) = add;//p存储add函数的地址
//	//printf("%d\n", p(1, 2));
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int input = 0;
//
//	do {
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			Calc(Add);
//			break;
//
//		case SUB:
//			Calc(Sub);
//			break;
//
//		case MUL:
//			Calc(Mul);
//			break;
//
//		case DIV:
//			Calc(Div);
//			break;
//
//		case EXIT:
//			printf("退出\n");
//			break;
//
//		default :
//			printf("输入有误\n");
//			break;
//		}
//	} while (input);
//	//int (*pfun[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	//do {
//	//	menu();
//	//	printf("请选择：>");
//	//	scanf("%d", &input);
//	//	if (input >= 1 && input <= 4)
//	//	{
//	//		printf("输入两个操作数：-->");
//	//		scanf("%d%d", &x, &y);
//	//		ret = pfun[input](x, y);
//	//		printf("ret = %d\n", ret);
//	//	}
//	//	else if(input != 0)
//	//	{
//	//		printf("输入有误，请重新输入\n");
//	//	}
//	//	else
//	//	{
//	//		printf("退出\n");
//	//	}
//	//} while (input);
//	return 0;
//}
////int test(int* p)
////{
////	//可以接收一维数组，地址
////	//int num;//&num
////	//int* p = &num;//p
////	//int arr[10];//arr
////}
