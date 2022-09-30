#define _CRT_SECURE_NO_WARNINGS


/*
1.函数是什么
2.库函数
3.自定义函数
4.函数参数
5.函数调用
6.函数的嵌套调用和链式访问
7.函数的声名和定义
8.函数递归
*/
//C语言常用的库函数
/*
1.IO函数
2.字符操作函数
3.内存操作函数
4.时间/日期函数
5.数学函数
6.其他库函数
*/
//memset函数的使用:将指定长度的前n个字节的内存空间替换成特定内容
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	//***** world
//	return 0;
//}
//实现二值交换，得用指针的方式实现
#include <stdio.h>
//void Swap(int* pa, int* pb)
//{
//	int tem = 0;
//	tem = *pb;
//	*pb = *pa;
//	*pa = tem;
//}
//int main()
//{
//	int a;
//	int b;
//	scanf("%d%d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//}
//当实参传给形参时
//形参其实是实参的一份临时拷贝
//对形参是修改是不会改变实参的
//===========================
//函数的调用
//传值调用
//函数的形参和实参分别占有不同的内存块，对形参的修改不会影响实参

//传址调用
//传址调用是吧函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
//这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量

//练习======================
//1.写一个函数，可以判断是不是润年
//void number(int n)
//{
//	if (n % 100 != 0 && n % 4 == 0)
//	{
//		printf("%d是闰年", n);
//	}
//	else if(n%400==0)
//	{
//		printf("%d是闰年", n);
//	}
//	else
//	{
//		printf("%d不是闰年", n);
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	number(n);
//}

//2.写一个函数，判断是否是素数
#include <math.h>
//int is_prime(int n)
//{
//	int i = 1;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			break;
//		}
//	}
//	if (i > sqrt(n))
//	{
//		return 1;   //是素数则返回1
//	}
//	else
//	{
//		return 0;    //不是素数则返回0
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int re;
//	for (i = 100; i <= 200; i++)
//	{
//		re = is_prime(i);
//		if (re == 1)
//		{
//			printf("%d是素数\n", i);
//		}
//		else
//		{
//			printf("%d不是素数\n", i);
//		}
//
//	}
//	return 0;
//}
// =====================================================
//3.写一个函数，实现一个整型有序数组的二分查找
//在一个有序数组中查找具体的某个数

//int binary_search(int arr[],int k,int sz)//数组传参，传过去的是数组首元素的地址，本质上是一个指针,可以将数组长度作为参数传入；
//{
//	//实现
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("未找到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d\n", ret);
//	}
//	return 0;
//}
//=========================================================
//写一个函数，每调用一次函数就会将num的值增加1;

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);//1
//	Add(&num);
//	printf("num = %d\n", num);//2
//	Add(&num);
//	printf("num = %d\n", num);//3
//	//调用函数，使得num每次增加1
//	return 0;
//}

//====================================================================
//====================================================================
//函数的嵌套调用和链式访问
//链式访问是将一个函数的返回值作为另一个函数的参数
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43))); //printf函数的返回值是打印的字符的个数，所以结果是4321
//	return 0;
//}

//=====================================================================
//函数的声明和定义
//当函数在主函数之后或者与主函数不在一个文件定义则需要声明，声明放在.h文件中
//int Add(int x,int y);
//函数声名：告诉编译器一个函数叫什么，参数是什么，返回类型是什么。但是具体是不是存在，无关紧要。
//函数声明要满足先声明再使用
//函数的声明一般放在头文件中。

//=====================================================================
//函数递归
//什么是递归？
//程序调用自身的编程技巧称为递归(recursion)。递归作为一种算法在程序设计语言中广泛应用。一个过程或函数在其定义或说明中有直接或间接
//调用自生的一种方法，它通常把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来求解，递归策略只需要少量的程序就可描述
//出解题过程所需要的多次重复计算，大大地减少了程序的代码量。递归的主要思考方式在于：把大事化小

//递归的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不在继续。
//每次递归调用之后越来越接近这个限制条件。
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//练习 1
//接受一个整型值(无符号),按照顺序打印它的每一位。例如：输入：1234，输出 1  2  3  4

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d   ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num); //1234
//	print(num);
//	return 0;
//
//}

//练习2.编写函数不允许创建临时变量，求字符串的长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//int my_strlen(char* str)
//{
//	int count = 0;
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "bit hello";
//	int len = my_strlen(arr);//
//	printf("len = %d", len);
//	return 0;
//}

// 递归与迭代
// 练习3
//求n的阶乘(不考虑溢出)
//int Face(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Face(n - 1);
//}
//
//int main()
//{
//	//求N的阶乘
//	int n = 0;
//	int ret;
//	scanf("%d", &n);
//	ret = Face(n);  //循环的方式
//	printf("%d\n", ret);
//	return 0;
//}

//===================
//求第n个斐波那契数。（不考虑溢出）
//斐波那契数列:1  1  2  3  5  8  13   21   34   55...
//描述第n个斐波那契数
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 2) + Fib(n - 1);
//	}
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("第%d个斐波那契数是%d", n,ret);
//	return 0;
//}


 /*
 
 
 
 */
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

//======================
//函数递归的几个经典题目（自主研究）
//1.汉诺塔问题
//2.青蛙跳台阶问题
//留意《剑指offer》这本书;