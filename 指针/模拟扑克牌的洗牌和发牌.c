//#include "test.h"
//#define SUITS 4
//#define FACES 13
//#define CARDS 52
//
//void shuffle(unsigned int wDeck[][FACES]);
//void deal(unsigned int wDeck[][FACES], const char* wFace[], const char* wSuit[]);
//int main()
//{
//	unsigned int deck[SUITS][FACES] = { 0 };//����һ��4*13�����飬��ʼ��Ϊ0
//
//	srand((unsigned int)time(NULL));
//	shuffle(deck);
//
//	const char* suit[SUITS] = { "����","����","÷��","����" };//��ɫָ��
//
//	const char* face[FACES] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };//����ָ��
//
//	deal(deck, face, suit);
//	return 0;
//}
//
//void shuffle(unsigned int wDeck[][FACES])
//{
//	for (size_t card = 1; card <= CARDS; card++)
//	{
//		size_t row;
//		size_t col;
//		do {
//			row = rand() % SUITS;//0��3
//			col = rand() % FACES;//0��12
//		} while (wDeck[row][col] != 0);
//
//		wDeck[row][col] = card;//1,2,3,4,����,51,52        �Ƶ�˳��ţ���ʾϴ�ƺ�ĵ� ���� ���˿���
//	}
//}
//
//void deal(unsigned int wDeck[][FACES], const char* wFace[], const char* wSuit[])
//{
//	for (size_t card = 1; card <= CARDS; card++)
//	{
//		for (size_t row = 0; row < SUITS; row++)
//		{
//			for (size_t col = 0; col < FACES; col++)
//			{
//				if (wDeck[row][col] == card)
//				{
//					printf("%5s of %-8s%c", wFace[col], wSuit[row], card % 2 == 0 ? '\n' : '\t');
//				}
//			}
//		}
//	}
//}
