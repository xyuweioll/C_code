#include <stdio.h>
/*
�ṹ�壺
�ṹ�����͵�����
�ṹ���ʼ��
�ṹ���Ա����
�ṹ�崫��
*/

//�ṹ����
//struct tag
//{
//	member - list;
//
//}variable-list;

//����һ��ѧ����һЩ����
//����
//����
//�绰
//�Ա�


//struct�ṹ��ؼ��֣�Stu�ṹ���ǩ ��struct Stu -�ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;  //s1,s2,s3������ȫ�ֵĽṹ�����


//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;  //typedef �� struct Stu������ΪStu
//
//
//
//int main()
//{
//	//struct Stu s; //�����������ֲ�����
//	Stu s2={"����",20,"15249287076","��"};//��ʼ��
//	return 0;
//}
////�ṹ�ĳ�Ա�����Ǳ��������顢ָ�롢�����������ṹ�塣


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
//	struct S s;  //�øմ����Ľṹ�崴��һ��s
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
	//��Ա����
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
	Stu s = { "����",40,"15598886688","��" };
	//��ӡ�ṹ������
	//Print1��Print2�ĸ����ã�(Print2����)
	Print1(s);
	Print2(&s);
	return 0;
}
/*
Print2����,��Ϊ�������ε�ʱ�򣬲�������Ҫѹջ�ġ��������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��
ϵͳ�����Ƚϴ����лᵼ�������½���
���ۣ��ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��
*/
