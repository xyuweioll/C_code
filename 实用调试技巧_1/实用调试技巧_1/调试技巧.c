#define _CRT_SECURE_NO_WARNINGS 
//实用调试技巧
//什么是bug？
//调试是什么？有多重要？
//debug和release的介绍
//windows环境调试介绍
//一些调试的实例
//如何写出好(易于调试)的代码
//编程常见的错误
//fn+f10调试，fn+f11逐语句运行
//什么是bug?
/*
Debug通常称为调试版本，它包含调试信息，并且不做任何优化，便于程序员调试程序。
Release称为发布版本，它往往是进行了各种优化，使得程序在代码代码大小和运行速度上都是最优的，以便用户很好使用

Debug版本的可执行程序，可以调试的，文件中包含了调试信息
Release版本的可执行程序
*/

#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d",i);
//	}
//	system("pause");
//	return 0;
//}

/*
* 非常重要！！！
快捷键
F5-启动调试-和F9配合使用的；先设置断点，F5运行程序会到断点处停止；
F5：启动调试，经常用来直接跳到下一个断点处。
F9：创建断点和取消断点 断点的重要作用是可以在程序的任意位置设置断点。这样就可以使程序在
想要的位置随意停止执行，继而一步一步执行下去。
F10：逐过程，通常用来处理一个过程，一个过程可以是一次函数调用，或者是一条语句。
F11:逐语句，就是每次都执行一条语句，但是这个快捷键可以使我们的执行逻辑进入函数内部（这是最常用的）。
Shift+F11:跳出函数内部；
CTRL+F5 ：开始执行不调试，如果你想让程序直接运行起来而不调试就可以直接使用。
Shift+F9:快速监视某一个值
注意：要先fn+f10调试起来，调试起来后才能在调试菜单下的窗口中查看反汇编、内存、寄存器等窗口；
*/
//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp=%d\n", tmp);
//	}
//	int arr[10] = { 0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0; //保存最终结果
//	int n = 0;
//	int ret = 1;//保留n的阶乘
//	scanf("%d", &n); //3  1!+2!+3!+4!
//	for (i = 1; i <= n; i++) 
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret*= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//===================================================================
//调试2
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%d\n", &i);        //debug版本和release版本会不同；
//	for (i = 0; i <= 65; i++)    //越界，但已经不会死循环
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//==============================================================================
//实现字符串拷贝
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;   //
//	}
//	*dest = *src;  //'\0'
//}

//优化
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)    //防止传入空指针
//	{
//		while (*dest++ = *src++)
//		{
//			;   //
//		}
//	}
//}
//===================================================================
//再优化
//#include <assert.h>  //断言需要引用的头文件
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL); //断言
//	assert(src != NULL); //断言
//	while (*dest++ = *src++)
//	{
//		;   //
//	}
//	
//}
//====================================================================
//再再优化
#include <assert.h>  //断言需要引用的头文件
////const 放在指针变量的*左边时，修饰的是*p,也就是说不能通过*p来改变*p(num)的值;
////const 放在指针变量*右边时，修饰的是指针p本身，p不能被改变。
//char* my_strcpy(char* dest, const char* src) //const 不允许指针置信的内容被修改
//{
//	char* ret = dest;  //开始的时候就将起始指针赋值给指针*ret
//	assert(dest != NULL); //断言
//	assert(src != NULL); //断言
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++)
//	{
//		;   //
//	}
//	return ret;
//}
//
//
//
//
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


// ===========================================
//实现string length

int my_strlen(const char *str)
{
	int count = 0;
	assert(str !=NULL);   //保证指针的有效性
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}




int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}