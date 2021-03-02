#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//第一个C程序

//int main(){
//	printf("hello world!");
//	return 0;
//}

//int main() {
//	printf("%d\n",sizeof(char));  //1
//	printf("%d\n",sizeof(short));  //2
//	printf("%d\n",sizeof(int));  //4
//	printf("%d\n",sizeof(long));  //4
//	printf("%d\n",sizeof(long long));  //8
//	printf("%d\n",sizeof(float));  //4
//	printf("%d\n",sizeof(double));  //8
//	printf("%d\n",sizeof(long double));  //8
//	return 0;
//}

//变量
//int global = 2021;//全局变量
//int main() {
//	int local = 2019;
//	int global = 2020;
//	printf("%d\n", global);//局部变量和全局变量同名的时候局部变量优先使用
//}

//scanf
//int main(){
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个操作数：");
//	scanf("%d %d",&num1,&num2); //scanf是c提供的，scanf_s不是标准c语言提供的，是vs编译器提供的，在vs中执行报错在第一行添加#define _CRT_SECURE_NO_WARNINGS 1
//	sum = num1 + num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}

//const 常属性


//int main() {
//	const int num = 4;
//	printf("%d\n", num);
//	num = 8;//const修饰的常变量：不能被修改
//	printf("%d\n", num);
//}

// #define 定义的标识符常量
//#define MAX 10
//int main() {
//	int arr[MAX] = { 0 };
//	printf("%d\n",MAX);
//	return 0;
//}

//枚举常量
//枚举：一一列举
//三原色：红、黄、蓝
//关键字：enum
//enum Threecolor{
//	RED,//有值，且不可改变
//	YELLOW,
//	BLUE
//};
//int main() {
//	/*enum Threecolor r = RED;*/
//	printf("%d\n",RED); //0
//	printf("%d\n", YELLOW);  //1
//	printf("%d\n", BLUE);  //2
//	return 0;
//}

//int main() {
//	char arr1[] = "abc";//char类型数组存放 字符串
//	//"abc"---'a','b','c','\0'
//	//'\0'---是字符串的结束标志
//	//'\0'---0
//	//'a'--97
//	char arr2[] = { 'a','b','c'};
//	//char arr2[] = {97,'b','c',0};
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	printf("%d\n",strlen(arr1));//strlen--string lenth 计算字符串长度
//	printf("%d\n", strlen(arr2));
//	//打印结果：3,随机值
//	return 0;
//}

//转移字符
//int main(){
//	//printf("%s\n","\"");
//	printf("c:\test\32\test.c\n");
//	printf("%d\n",strlen("c:\test\32\test.c"));
//	return 0;
//}

//关键字static
//void test(){
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main(){
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		test();
//	}
//	return 0;
//}

//int main() {
//	//extern---声明外部符号
//	extern int g_val;
//	printf("g_val = %d\n", g_val);//static修饰全局变量，改变了变量的作用域-让静态全局变量只能在自己所在的源文件内部使用
//	return 0;
//}

//define 定义标识符常量
//#define MAX 100
//define 可以定义宏--带参数

//函数的实现
//int Max(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(X,Y)(X>Y?X:Y)
//
//int main() {
//	int a = 10;
//	int b = 20;
//	//函数
//	printf("%d\n", Max(a, b));
//	//宏
//	printf("%d\n", MAX(a, b));
//	return 0;
//}

//int main() {
//	int a = 10;
//	// &a --取a的地址
//	int* p = &a;
//	//有一种变量用来存放地址→指针变量,p为一个整型指针变量
//	//printf("%p\n",&a);// %p打印地址
//	//printf("%p\n", p);
//	//*p前面这个*，--- 解引用操作符/间接访问操作符，解析p所存地址指向变量的值
//	*p = 20;
//	printf("a=%d\n", a);
//	return 0;
//}

//以整型指针举例，推广到其他类型，如：
//int main() {
//	char ch = 'w';
//	char* p = &ch;
//	*p = 'a';
//	printf("ch = %c\n", ch);
//	printf("%d\n", sizeof(p));//指针变量在32位平台是4个字节，64位平台是8个字节，可在debug那里改！
//	return 0;
//}

//结构体
//struct stu {
//	char name[20];//姓名
//	int age;	  //年龄
//	char sex[5]; //性别
//	char id[15];//学号
//};
////打印结构体信息
//int main(){
//	struct stu s = { "张三","20","男","20210101" };
//	printf("姓名 = %s 年龄 = %d 性别 = %s 学号= %s\n", s.name, s.age, s.sex, s.id);
//	//结构体类型指针变量--存s的地址
//	struct stu* pb = &s;
//	//利用pb来打印学号和姓名
//	printf("%s\n", (*pb).name);
//	printf("%s\n", (*pb).id);
//	// . 用于结构体变量， ->  用于结构体指针 指向变量的成员
//	printf("%s\n", pb->name);
//	printf("%s\n", pb->id);
//	return 0;
//}