#include "test.h"

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p1 = &arr[0];
	int* p2 = &arr[2];
	printf("%d", p2 - p1);
	return 0;
}