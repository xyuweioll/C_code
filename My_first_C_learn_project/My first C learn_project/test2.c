#define _CRT_SECURE_NO_WARNINGS
//C���Զ��Ǵ�main������ʼ
//����һ����stdio.h���ļ�
#include <stdio.h>  //std-��׼(standard input output)
//// ctrl+f5����    fn+f7���б���
////Ctrl+K Ȼ��Ctrl+C  ע��         ����Ctrl+K+C
////Ctrl+K Ȼ��Ctrl+U ȡ��ע��  ����Ctrl+K+U
//
////mainǰ���int��ʾmain�������÷���һ������ֵ
//int main()  //main �����������������ڣ�main��������ֻ��һ��
//{
//	//���������Ϊ
//	printf("hello world!\n");
//	printf("%d\n", sizeof(char));    //�鿴char�����������ڴ������˶��ռ�  1 �ֽ�(byte)(8��bit)
//	printf("%d\n", sizeof(short));                                        //2  �ֽ�
//	printf("%d\n", sizeof(int));                                          //4  �ֽ�
//	printf("%d\n", sizeof(float));                                        //4  �ֽ�
//	printf("%d\n", sizeof(long));                                        //4  Ҳ������8	c���Թ涨 sizeof(long)>=sizeof(int)
//	printf("%d\n", sizeof(long long));                                    //8 
//	printf("%d\n", sizeof(double));                                    //8
//
//	//�⺯����-C���Ա����ṩ�����ǵĺ���
//	return 0; //����0
//}
/*
void main()  //����main������д���Ѿ���ʱ
{
}
*/

/*
��������
char   //�ַ���
short  //������
int    //����
long   //������
long long //����������
float   //�����ȸ�����
double  //˫���ȸ�����
��ӡ��ʽ
printf("%c",ch) #��ӡ�ַ�������
printf("%d",age) #��ӡ����10��������
printf("%f",height) #��ӡ������
%p  �Ե�ַ����ʽ���д�ӡ
%x  ��ӡ16������
%o  ��ӡ8������
*/

/*
ȫ�ֱ����;ֲ���������ͬʱ����;
���ֲ����������ֺ�ȫ�ֱ�����ͬ��ʱ�򣬾ֲ���������;
������ȫ�ֱ����;ֲ����������ֲ�Ҫ��ͬ��������������bug;

*/




int main()
{
	//�����������ĺ�
	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//��������-ʹ�����뺯��
	scanf("%d%d", &num1, &num2);   //&����˼��ȡ��ַ
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}
//ȫ�ֱ���������������������
