#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0; 
//}

////Debug �������ѭ��
////release ������ѭ��
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

//F5----�������ԣ���������������һ���ϵ�
//F9----���öϵ�
int main()
{
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		printf("%d ", i);
	}
	for (i = 0; i < 100; i++)
	{
		printf("%d ", 10-i);
	}
	//system("pause");
	return 0; 
}