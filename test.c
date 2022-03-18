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

////Debug 情况下死循环
////release 不会死循环
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

////F5----启动调试，经常用来调到下一个断点
////F9----设置断点
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	//system("pause");
//	return 0; 
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	return 0;
//}
 
//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//1!+2!+3!+...+n!
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

////strcpy - 字符串拷贝
///////6/10分
////void my_strcpy(char* dest, char* src)
////{
////	while (*src != '\0')
////	{
////		*dest = *src;
////		src++;
////		dest++;
////	}
////	*dest = *src;
////}
//
//////7/10分
////void my_strcpy(char* dest, char* src)
////{
////	while (*dest++ = *src++)
////	{
////		;
////	}
////}
//
//////7/10分
////void my_strcpy(char* dest, char* src)
////{
////	if (dest != NULL && src != NULL)
////	{
////		while (*dest++ = *src++)
////		{
////			;
////		}
////	}
////}
//
//
//////8/10分
////#include <assert.h>
////void my_strcpy(char* dest, char* src)
////{
////	assert(dest != NULL);//断言
////	assert(src != NULL);//断言
////	while (*dest++ = *src++)
////	{
////		;
////	}
////}
//
////10/10分
//char my_strcpy(char* dest,const char* src)
//{
//  char *ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//  return ret;
//}
//
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	//my_strcpy(arr1, NULL);
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	const int* p = &num;
//	err   const 放在指针变量的*的左边时，修饰的是*p。不能通过p来改变*p（num）的值。
//	int* const p = &num;
//	const 放在指针变量的*的右边时，修饰的是指针变量p本身，p不能被改变。
//	*p = 20;
//
//	printf("%d\n", num);
//	return 0;
//}

//#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//断言
//
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}