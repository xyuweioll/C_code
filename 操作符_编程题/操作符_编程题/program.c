#define _CRT_SECURE_NO_WARNINGS
//1.ͳ�ƶ�������1�ĸ���
//дһ���������ز�����������1�ĸ�������15   00001111  ����4��1

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


//����ʵ�ַ�����
//int count_bit_one(a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1); //һ���������һ�����������������Խ����ұߵ�һ��1ȥ��
//		count++;          //�м���1��ѭ������
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	//дһ����������a�Ķ����Ʊ�ʾ���м���1;
//	int count = count_bit_one(a);
//	printf("count= %d\n",count);
//	return 0;
//}
// ============================================================================
//2.��������в�ͬλ�ĸ���
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//��������1�Ļ�����ʵ�֣�������������������㣬���������÷���ֵ��������1�ĸ���


//int count_bit_one(a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1); //һ���������һ�����������������Խ����ұߵ�һ��1ȥ��
//		count++;          //�м���1��ѭ������
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
//3.��ȡ�����Ƶ�����λ��ż��λ���ֱ��ӡ������������

//void print(int m)
//{
//	int i = 0;
//	printf("����λ��");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d",((m >> i) & 1));
//	}
//	printf("\n");
//
//	printf("ż��λ��");
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
//4.ʹ��ָ���ӡ��������
//дһ��������ӡarr��������ݣ������������±꣬ʹ��ָ�롣arr��һ������һά����

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
//5.�ݹ鷽ʽʵ�ִ�ӡһ������ÿһλ

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
//	printf("�����룺");
//	scanf("%d", &n);
//	print(n);
//}

// ==================================================================================
//6.��Ŀ���ƣ��ַ������򣨵ݹ�ʵ�֣�
//�ַ�������(�ݹ�ʵ��)Ҫ��:����ʹ��C�������е��ַ�����������

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
//		printf("%c\n", arr[sz - 2 - i]);  //-2����Ϊ�ַ���abcdef����/0��β
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
//		printf("%c\n", arr[sz - 2 - i]);  //-2����Ϊ�ַ���abcdef����/0��β
//
//	}
//}

//�ݹ�ʵ��
//int my_strlen(char* arr)  //ʵ���ַ������ȼ���
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
//	if (my_strlen(arr + 1) >= 2) //�ݹ�������е�����
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tem;
//}
//
//
//int main()
//{
//	char arr[] = "abcdef"; //˫����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	printf("%s\n", arr);
//	reverse_string(arr,sz);
//	printf("%s\n", arr);
//	//char a = 'a';  //������
//	//char b = 'b';
//	//printf("a = %c,b = %c\n", a, b);
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	//printf("a = %c,b = %c\n", a, b);
//	return 0;
//}

//======================================================================================
//7.����һ������ÿλ֮�ͣ����ݹ�ʵ��
//дһ���ݹ麯��DigitSum(n),����һ���Ǹ����������������������֮��

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
//�ݹ�ʵ��n��k�η�
//��дһ������ʵ��n��k�η�

//double Pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / (Pow(n, -k))); //���С��0����ȡ����Ӧ�η������ĵ���
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

