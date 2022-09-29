#define _CRT_SECURE_NO_WARNINGS
//C语言都是从main函数开始
//包含一个叫stdio.h的文件
#include <stdio.h>  //std-标准(standard input output)
//// ctrl+f5运行    fn+f7进行编译
////Ctrl+K 然后Ctrl+C  注释         或者Ctrl+K+C
////Ctrl+K 然后Ctrl+U 取消注释  或者Ctrl+K+U
//
////main前面的int表示main函数调用返回一个整型值
//int main()  //main 是主函数：程序的入口，main函数有且只有一个
//{
//	//这里完成认为
//	printf("hello world!\n");
//	printf("%d\n", sizeof(char));    //查看char类型数据向内存申请了多大空间  1 字节(byte)(8个bit)
//	printf("%d\n", sizeof(short));                                        //2  字节
//	printf("%d\n", sizeof(int));                                          //4  字节
//	printf("%d\n", sizeof(float));                                        //4  字节
//	printf("%d\n", sizeof(long));                                        //4  也可以是8	c语言规定 sizeof(long)>=sizeof(int)
//	printf("%d\n", sizeof(long long));                                    //8 
//	printf("%d\n", sizeof(double));                                    //8
//
//	//库函数：-C语言本身提供给我们的函数
//	return 0; //返回0
//}
/*
void main()  //这种main函数的写法已经过时
{
}
*/

/*
数据类型
char   //字符型
short  //短整型
int    //整型
long   //长整型
long long //更长的整型
float   //单精度浮点数
double  //双精度浮点数
打印格式
printf("%c",ch) #打印字符型数据
printf("%d",age) #打印整型10进制数据
printf("%f",height) #打印浮点数
%p  以地址的形式进行打印
%x  打印16进制数
%o  打印8进制数
*/

/*
全局变量和局部变量可以同时存在;
当局部变量的名字和全局变量相同的时候，局部变量优先;
但建议全局变量和局部变量的名字不要相同，容易误会而产生bug;

*/




int main()
{
	//计算两个数的和
	//C语言语法规定，变量要定义在当前代码块的最前面
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//输入数据-使用输入函数
	scanf("%d%d", &num1, &num2);   //&的意思是取地址
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}
//全局变量的作用域是整个工程
