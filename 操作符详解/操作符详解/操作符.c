#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 5 / 2;  //商2余1，除数与被除数里至少有一个是浮点数结果才能为浮点数
//	int a = 5 % 2;  //余数1，取模操作两端的数都必须为整型，否则会报错
//	printf("a=%d\n", a);
//	return 0;
//}

//移位操作符
//int mian()
//{
//	int a = 16;
//	//>> 右移操作符，
//	//移动的是二进制位
//	int b = a >> 1;
//	return 0;
//}
//整数的二进制表示有三种形式：源码、反码、补码
//存储到内存中的是补码
//==============================================
//位操作
//int main()
//{
//	//&  按二进制位与
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	return 0;
//}
//===============================================
//一道变态的面试题：不能创建临时变量(第三个变量)，实现两个数的交换(也可以用加减法实现，但这种方法的缺陷是可能会溢出，如两个很大的数相加)
//这道题利用的异或运算的性质，即一个数与其自身异或都为0，任何数与0异或均为其本身
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d,b=%d\n", a, b);
//	return 0;
//}

//===========================================
//求一个整数的二进制数有多少个1
//int main() 
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num的补码中有几个1
//	while (num)
//	{
//		if (num % 2 == 1)  //模取余
//			count++;
//		num = num / 2;
//	}
//	printf("二进制位共有%d位1\n", count);
//	return 0;
//}
// 通过按位与1，再不断右移

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);//-1
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//}
//	
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf(" %d\n",sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}
// 按位取反
//int main()
//{
//	int a = 0;
//	//按2进制位取反
//	//00000000000000000000000000000000  原码
//	//11111111111111111111111111111111  按位取反后补码
//	//11111111111111111111111111111110  反码
//	//10000000000000000000000000000001  原码
//	// -1
//	printf("%d\n", ~a);
//	return 0;    // 0按位取反得到-1；
//}
//=========================================================
////练习题
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//int main()
//{
//	printf("12121");
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf('%d\n', sizeof(arr)); //40
//	printf('%d\n', sizeof(ch)); //10
//	printf("12345");
//	//test1(arr);  //传参传首元素地址，用一指针类型的接收，所以其位4或8个字节，根据平台而定
//	//test2(ch);  //
//	return 0;	
//}

// 结构体变量
//创建一个结构体类型 struct STU
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//使用struct Stu这个类型创建了一个学生对象s1,并初始化
//	struct Stu s1 = { "张三",20,"2019010305" };
//	struct Stu *ps = &s1;
//	printf("%s\n", (*ps).age);
//	printf("%s\n", ps->id);
//	printf("%s\n",s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	//结构体变量.成员名
//	return 0;
//}
//=========================================================





