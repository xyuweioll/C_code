#define _CRT_SECURE_NO_WARNINGS
//1.统计二进制中1的个数
//写一个函数返回参数二进制中1的个数，如15   00001111  返回4个1

#include <stdio.h>

//int count_bit_one(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		printf("%d\n", a);
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//		printf("%d\n", a);
//	}
//	return count;
//}

//int count_bit_one(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}


//最精简的实现方法：
//int count_bit_one(a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1); //一个数与其减一后的数进行与运算可以将最右边的一个1去掉
//		count++;          //有几个1就循环几次
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	//写一个函数，求a的二进制表示中有几个1;
//	int count = count_bit_one(a);
//	printf("count= %d\n",count);
//	return 0;
//}
// ============================================================================
//2.求二进制中不同位的个数
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//可以在题1的基础上实现，即将两个数先异或运算，运算后再求该返回值二进制中1的个数


//int count_bit_one(a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1); //一个数与其减一后的数进行与运算可以将最右边的一个1去掉
//		count++;          //有几个1就循环几次
//	}
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	printf("%d,%d\n", a, b);
//	int n = a ^ b;
//	int count = count_bit_one(n);
//	printf("count = %d", count);
//	return 0;
//}

// ===============================================================================
//3.获取二进制的奇数位和偶数位，分别打印出二进制序列

//void print(int m)
//{
//	int i = 0;
//	printf("奇数位：");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d",((m >> i) & 1));
//	}
//	printf("\n");
//
//	printf("偶数位：");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", ((m >> i) & 1));
//	}
//	printf("\n");
//
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//===============================================================================
//4.使用指针打印数组内容
//写一个函数打印arr数组的内容，不适用数组下标，使用指针。arr是一个整型一维数组

//void print(int *p, int sz)   
//{
//	int i = 0;
//	for (i; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//}

//======================================================================================
//5.递归方式实现打印一个数的每一位

//void print(int n)
//{
//	if (n < 10)
//	{
//		printf("%d\n", n);
//	}
//	else
//	{
//		print(n / 10);
//		printf("%d\n", n % 10);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	printf("请输入：");
//	scanf("%d", &n);
//	print(n);
//}

// ==================================================================================
//6.题目名称：字符串逆序（递归实现）
//字符串逆序(递归实现)要求:不能使用C函数库中的字符串操作函数

//void reverse_string(char arr[], int sz)
//{
//	int mid = sz / 2;
//	printf("mid = %d\n", mid);
//	int i = 0;
//	for (i; i < mid; i++)
//	{
//		arr[i] = arr[i]^arr[sz-2-i];
//		arr[sz - 2 - i] = arr[i] ^ arr[sz - 2 - i];
//		arr[i] = arr[i] ^ arr[sz - 2 - i];
//		printf("%c\n", arr[i]);
//		printf("%c\n", arr[sz - 2 - i]);  //-2是因为字符串abcdef是以/0结尾
//
//	}
//}


//void reverse_string(char arr[], int sz)
//{
//	int mid = sz / 2;
//	printf("mid = %d\n", mid);
//	int i = 0;
//	for (i; i < mid; i++)
//	{
//		*(arr+i) = *(arr+i)^*(arr+sz-2-i);
//		*(arr + sz - 2 - i) = *(arr + i) ^ *(arr + sz - 2 - i);
//		*(arr + i) = *(arr + i) ^ *(arr + sz - 2 - i);
//		printf("%c\n", arr[i]);
//		printf("%c\n", arr[sz - 2 - i]);  //-2是因为字符串abcdef是以/0结尾
//
//	}
//}

//递归实现
//int my_strlen(char* arr)  //实现字符串长度计算
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr += 1;
//	}
//	return count;
//}
//
//void reverse_string(char arr[]) 
//{
//	char tem = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2) //递归继续进行的条件
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tem;
//}
//
//
//int main()
//{
//	char arr[] = "abcdef"; //双引号
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	printf("%s\n", arr);
//	reverse_string(arr,sz);
//	printf("%s\n", arr);
//	//char a = 'a';  //单引号
//	//char b = 'b';
//	//printf("a = %c,b = %c\n", a, b);
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	//printf("a = %c,b = %c\n", a, b);
//	return 0;
//}

//======================================================================================
//7.计算一个数的每位之和（）递归实现
//写一个递归函数DigitSum(n),输入一个非负整数，返回组成它的数字之和

//int DigitSum(int n)
//{
//	if (n>9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int summ = DigitSum(n);
//	printf("%d", summ);
//	return 0;
//}

//=====================================================================================
//递归实现n的k次方
//编写一个函数实现n的k次方

//double Pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / (Pow(n, -k))); //如果小于0就是取其相应次方计算后的倒数
//	}
//	else if (k > 0)
//	{   //n^k = n*n^(k-1)
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n,&k);
//	double ret = Pow(n,k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}

