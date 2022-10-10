#include <stdio.h>
/*
结构体：
结构体类型的声明
结构体初始化
结构体成员访问
结构体传参
*/

//结构声明
//struct tag
//{
//	member - list;
//
//}variable-list;

//描述一个学生，一些数据
//名字
//年龄
//电话
//性别


//struct结构体关键字；Stu结构体标签 ；struct Stu -结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;  //s1,s2,s3是三个全局的结构体变量


//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;  //typedef 将 struct Stu重命名为Stu
//
//
//
//int main()
//{
//	//struct Stu s; //创建变量，局部变量
//	Stu s2={"张三",20,"15249287076","男"};//初始化
//	return 0;
//}
////结构的成员可以是标量、数组、指针、甚至是其他结构体。


//
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;  //用刚创建的结构体创建一个s
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = {"hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n", t.ch);      //hehe
//	printf("%s\n", t.s.arr);   //hello world
//	printf("%lf\n", t.s.d);    //3.14
//	printf("%s\n", t.pc);      //hello bit
//	return 0;
//}


//==============================================================
typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void Print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age: %d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex: %s\n", tmp.sex);
}

void Print2(Stu* ps)
{
	printf("name:%s\n", ps->name);
	printf("age: %d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex: %s\n", ps->sex);
	
}

int main()
{
	Stu s = { "李四",40,"15598886688","男" };
	//打印结构体数据
	//Print1和Print2哪个更好？(Print2更好)
	Print1(s);
	Print2(&s);
	return 0;
}
/*
Print2更好,因为函数传参的时候，参数是需要压栈的。如果传递一个结构体对象的时候，结构体过大，参数压栈的
系统开销比较大，所有会导致性能下降。
结论：结构体传参的时候，要传结构体的地址。
*/
