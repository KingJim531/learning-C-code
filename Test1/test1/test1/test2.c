#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//if语句
//int main() {
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年！");
//	else
//		printf("成年！");
//}

//int main() {
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年！");
//	else if(age>=18 && age<30)
//		printf("青年！");
//	else if(age>=28 && age<50)
//		printf("中年！");
//	else if (age >= 50 && age < 90)
//		printf("老年！");
//}

//输出1-100之间的奇数
//int main() {
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 1)
//			printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

//case语句
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		break;
//	}
//	return 0;
//}

//int main() {
//	int day = 0;
//	scanf("%d",&day);
//	switch (day)
//	{
//	case 1://case后面只能是整型常量/整型常量表达式
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday！\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend！\n");
//		break;
//	default:
//		break;
//	}
//	return 0;
//}

////while循环
//int main() {
//	int i = 1;
//	while (i <= 10) {
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//while循环中的break
//int main() {
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main() {
//	int i = 1;
//	while (i <= 10) {
//		printf("%d ", i);
//		if (i == 5)
//			break;
//		i++;
//	}
//	return 0;
//}

//int main() {
//	int i = 1;
//	while (i < 10) {
//		i++;
//		if (i == 5)
//			continue;//用于终止本次循环，本次循环中continue后面的代码不再执行。
//		printf("%d ", i);
//	}
//	return 0;
//}


//getchar,putchar
//int main() {
//	int ch = 0;
//	ch = getchar();
//	//getchar函数输入的字符，可以赋值给一个字符变量或整形变量
//	putchar(ch);
//	return 0;
//}

//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF)	//用getchar输入字符串
//
//	//getchar函数输入的字符，可以赋值给一个字符变量或整形变量
//	//ctrl+z
//	//eof --- end of file -> -1 
//
//		putchar(ch);
//	return 0;
//}

//int main() {
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码："); //输入密码并存放在password数组中
//	scanf("%s", password);
//	//缓冲区还剩一个'\n'
//	//读取一下'\n'
//	getchar();
//	printf("请确认(Y/N)：");
//	ret = getchar(); //Y/N
//	if (ret == 'Y' || ret == 'y') {
//		printf("成功\n");
//	}
//	else {
//		printf("失败\n");
//	}
//	return 0;
//}
////存在一个问题，就是如果输入密码的时候敲了空格就会运行出问题，是缓冲区读取字符的原因。

//改进
//int main() {
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码："); //输入密码并存放在password数组中
//	scanf("%s", password);
//	//缓冲区还剩一个'\n'
//	//读取一下'\n'
//	while ( (getchar()) != '\n') {
//		;//空语句，不需要做什么事情，就是读到缓冲区为\n时为止
//	}
//	printf("请确认(Y/N)：");
//	ret = getchar(); //Y/N
//	if (ret == 'Y' || ret == 'y') {
//		printf("成功\n");
//	}
//	else {
//		printf("失败\n");
//	}
//	return 0;
//}

//int main() {
//	int ch = 0;
//	while ((ch=getchar()) != EOF) {
//		if (ch < '0' || ch>'9') // 只接收0-9，否则就一直循环
//			continue;  //跳出本次循环
//		putchar(ch);
//	}
//}

//int main() {
//	int i;
//	for (i = 1; i <= 10; i++) {
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main() {
//	int i;
//	for (i = 1; i <= 10; i++) {
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//do-while循环
//int main() {
//	int i = 1;
//	do {
//		printf("%d\n",i);
//		i++;
//	} while(i<=10);
//	return 0;
//}

//练习
//1.计算n的阶乘
//int main() {
//	int a = 1;
//	int n,i;
//	printf("***计算n的阶乘***\n");
//	while(1){
//		printf("请输入n:");
//		scanf("%d", &n);
//		i = n;
//		if (n == 0) {
//			a = 1;
//			printf("%d的阶乘为:%d\n", n, a);
//			break;
//		}
//		else if (n < 0) {
//			printf("请输入正整数！\n");
//			continue;
//		}
//		else {
//			for (; n > 1; n--) {
//				a *= n;
//			}
//			printf("%d的阶乘为:%d\n", i, a);
//			break;
//		}
//	}
//	return 0;
//}

//2.计算1!+2!+…+10!的阶乘
//int main() {
//	int a = 1;
//	int n,sum=0;
//	printf("***计算1!+2!+…+10!的阶乘***\n");
//	for (n=1; n <=10; n++) {
//		a *= n;
//		sum += a;
//		}
//	printf("sum=%d\n",sum);
//	return 0;
//	  }

//遍历顺序数组
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (k == arr[i]) {
//			printf("找到了，下标是：%d\n", i);
//			break;//找到后跳出！
//		}
//	}
//	if(i==sz)
//		printf("没找到！\n");
//	return 0;
//}

//折半查找


//代码1 //编写代码，演示多个字符从两端移动，向中间汇聚 #include <stdio.h>
//int main()
//{
//    char arr1[] = "welcome to bit..."; char arr2[] = "#################"; int left = 0;
//    int right = strlen(arr1) - 1; printf("%s\n", arr2); //while循环实现
//    while (left <= right)
//    {
//        Sleep(1000);
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        left++;
//        right--;
//        printf("%s\n", arr2);
//    }
//    //for循环实现
//    for (left = 0, right = strlen(src) - 1;
//        left <= right;
//        left++, right--)
//    {
//        Sleep(1000);
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", target);
//    }
//    retutn 0;
//}