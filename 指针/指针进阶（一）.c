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
//	printf("1.�� 2.�� 3.�� 4.�� 0.�˳�\n");
//}
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������������������-->");
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
//	//printf("�ַ����Ƚ�ʹ��strcmp\n");
//	//if (arr1 == arr2)
//	//{
//	//	printf("arr1 == arr2\n");
//	//}
//	//if (strcmp(arr1,arr2) == 0)
//	//{
//	//	printf("arr1 == arr2��strcmp��\n");
//	//}
//	//if (p1 == p2)
//	//{
//	//	printf("p1 == p2\n");
//	//}
//
//	//int* arr[5];//ָ�����飺�������ָ�������
//	//int(*p2)[10] = &arr;//����ָ�룺*����p2��ϣ�˵��p2��һ��ָ�������ָ������
//
//	//int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	//print(arr, 3, 5);
//	//puts("");
//	//print1(arr, 3, 5);
//
//	//printf("0x%p\n", &Test);//����ȡ�������ĵ�ַ��˵������Ҳ�е�ַ
//	//printf("0x%p\n", Test);
//	////(*Test)();//���������Ǻ����ĵ�ַ�����Խ�����
//	//Test();
//
//	//����ָ��
//	//int(*p)(int, int) = add;//p�洢add�����ĵ�ַ
//	//printf("%d\n", p(1, 2));
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int input = 0;
//
//	do {
//		menu();
//		printf("��ѡ��>");
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
//			printf("�˳�\n");
//			break;
//
//		default :
//			printf("��������\n");
//			break;
//		}
//	} while (input);
//	//int (*pfun[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	//do {
//	//	menu();
//	//	printf("��ѡ��>");
//	//	scanf("%d", &input);
//	//	if (input >= 1 && input <= 4)
//	//	{
//	//		printf("����������������-->");
//	//		scanf("%d%d", &x, &y);
//	//		ret = pfun[input](x, y);
//	//		printf("ret = %d\n", ret);
//	//	}
//	//	else if(input != 0)
//	//	{
//	//		printf("������������������\n");
//	//	}
//	//	else
//	//	{
//	//		printf("�˳�\n");
//	//	}
//	//} while (input);
//	return 0;
//}
////int test(int* p)
////{
////	//���Խ���һά���飬��ַ
////	//int num;//&num
////	//int* p = &num;//p
////	//int arr[10];//arr
////}
