
#include <stdio.h>
//int main()
//{
//	//printf("%d\n", sizeof(char*));   //8个字节，因为为64位机器
//	//printf("%d\n", sizeof(short*));  //8
//	//printf("%d\n", sizeof(int*));    //8
//	//printf("%d\n", sizeof(double*)); //8
//	int a = 0x11223344;
//	int* pa = &a;   //取a的地址
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);  //pa和pc值相同
//
//	return 0;
//}
//虽然指针的大小都是一样的，但指针的类型还是具有一定的实际意义
//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int* p 能够访问四个字节；	char* p 能够访问一个字节；double* p  *p能够访问8个字节

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}
// 指针类型决定了：指针走一步走多远，即决定了指针的步长；
//如一个整型指针加一跳过4个字节，一个字符型指针加一跳过1个字节
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr; //数组名-首元素地址
//	int i = 0;
//	for (i; i < 10; i++)     //循环将数组中的每个元素都改为1
//	{
//		*(p + i) = 1; //解引用
//	}
//	return 0;
//}


//野指针：就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//形成野指针的原因：
//1.指针未初始化
//int main()
//{
//	//int a;//局部变量不初始化，默认是随机值
//	int* p; //局部指针变量不初始化就被初始化为随机值
//	return 0;
//}
//2.指针越界访问也会导致野指针的问题
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}
//3.指针指向的空间释放
//这里放在动态内存开辟的时候讲

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	return 0;
//}

//===================================================================
//指针运算
//指针+-整数
//指针-指针
//指针的关系运算

//1.指针+-整数
//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *p);
//		p = p + 1;
//	}
//	return 0;
//}

//2.指针-指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);    //结果为9，指针减指针需要同一种类型的指针进行运算；
//	return 0;
//}

//==========================================================================================
//strlen模拟实现求字符串长度

// int my_strlen(char* str)
//{
//	 char* start = str;
//	 char* end = str;
//	 while (*end != '\0')
//	 {
//		 end++;
//	 }
//	 return end - start;  //元素个数
//}
//
//
//
//int main()
//{
//	char arr[] = "bit";    //单引号和多引号不通用
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//	
//======================================================================
//指针的关系运算
//#define N_values 5
//int main()
//{
//	float values[N_values];
//	float* vp;
//	for (vp = &values[N_values]; vp > &values[0];)
//	{
//		*--vp;  //先解应用再--
//	}
//	//C语言的标准规定允许指向数组元素的指针与指向数组最后一个元素后面的那个内置位置的指针比较，但是不允许
//	//与指向第一个元素之前的那个内存位置的指针做比较。
//}
//=======================================================================
//指针和数组
//int main()
//{
//	int arr[10] = { 0 };
//	arr;//数组名是首元素的地址,以下两个打印结果相同；有两个例外：1.&arr-数组名不是首元素地址，数组名表示整个数组；
//	//2.sizeof(arr) - 此处数组名表示的不是首元素地址，表示的是整个数组，计算的是整个数组的大小；
//	printf("%p\n", arr);     
//	printf("%p\n", &arr[0]);
//	return 0;
//}

//===============================================================================================
////二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;  //ppa就是二级指针
//	int*** pppa = &ppa;  //pppa是三级指针
//	return 0;
//}

//===============================================================================================
//指针数组  -本质是数组 -存放指针的数组
//数组指针  -本质是指针
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* arr[3] = {pa,pb,pc};//指针数组
//	int i = 0;
//	for (i; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}
//=================================================================================================

void Init(int arr[], int sz)
{
	int i = 0;
	for (i; i < sz; i++)
	{
		*arr++ = 0;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
}

void Reverse(int arr[], int sz)
{
	int mid = sz / 2;  //中间值
	int i = 0;
	for (i; i <= mid; i++)
	{//实现双值交换
		arr[i] = arr[i] ^ arr[sz - 1];
		arr[sz - 1] = arr[i] ^ arr[sz - 1];
		arr[i] = arr[i] ^ arr[sz - 1];
		sz--;
	}
}

int main()
{
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int sz = sizeof(arr)/sizeof(arr[0]);  //求数组元素个数
	//Init(arr,sz);//把数组初始化为全零
	Print(arr, sz); //打印函数
	Reverse(arr, sz); //逆序
	Print(arr, sz); //逆序后打印
	return 0;
}


