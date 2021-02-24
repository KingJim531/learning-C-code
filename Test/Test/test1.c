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

int main() {

}
