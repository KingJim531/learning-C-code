#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//if���
//int main() {
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("δ���꣡");
//	else
//		printf("���꣡");
//}

//int main() {
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("δ���꣡");
//	else if(age>=18 && age<30)
//		printf("���꣡");
//	else if(age>=28 && age<50)
//		printf("���꣡");
//	else if (age >= 50 && age < 90)
//		printf("���꣡");
//}

//���1-100֮�������
//int main() {
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 1)
//			printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

//case���
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//	case 1://case����ֻ�������ͳ���/���ͳ������ʽ
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday��\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend��\n");
//		break;
//	default:
//		break;
//	}
//	return 0;
//}

////whileѭ��
//int main() {
//	int i = 1;
//	while (i <= 10) {
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//whileѭ���е�break
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
//			continue;//������ֹ����ѭ��������ѭ����continue����Ĵ��벻��ִ�С�
//		printf("%d ", i);
//	}
//	return 0;
//}


//getchar,putchar
//int main() {
//	int ch = 0;
//	ch = getchar();
//	//getchar����������ַ������Ը�ֵ��һ���ַ����������α���
//	putchar(ch);
//	return 0;
//}

//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF)	//��getchar�����ַ���
//
//	//getchar����������ַ������Ը�ֵ��һ���ַ����������α���
//	//ctrl+z
//	//eof --- end of file -> -1 
//
//		putchar(ch);
//	return 0;
//}

//int main() {
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������룺"); //�������벢�����password������
//	scanf("%s", password);
//	//��������ʣһ��'\n'
//	//��ȡһ��'\n'
//	getchar();
//	printf("��ȷ��(Y/N)��");
//	ret = getchar(); //Y/N
//	if (ret == 'Y' || ret == 'y') {
//		printf("�ɹ�\n");
//	}
//	else {
//		printf("ʧ��\n");
//	}
//	return 0;
//}
////����һ�����⣬����������������ʱ�����˿ո�ͻ����г����⣬�ǻ�������ȡ�ַ���ԭ��

//�Ľ�
//int main() {
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������룺"); //�������벢�����password������
//	scanf("%s", password);
//	//��������ʣһ��'\n'
//	//��ȡһ��'\n'
//	while ( (getchar()) != '\n') {
//		;//����䣬����Ҫ��ʲô���飬���Ƕ���������Ϊ\nʱΪֹ
//	}
//	printf("��ȷ��(Y/N)��");
//	ret = getchar(); //Y/N
//	if (ret == 'Y' || ret == 'y') {
//		printf("�ɹ�\n");
//	}
//	else {
//		printf("ʧ��\n");
//	}
//	return 0;
//}

//int main() {
//	int ch = 0;
//	while ((ch=getchar()) != EOF) {
//		if (ch < '0' || ch>'9') // ֻ����0-9�������һֱѭ��
//			continue;  //��������ѭ��
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

//do-whileѭ��
//int main() {
//	int i = 1;
//	do {
//		printf("%d\n",i);
//		i++;
//	} while(i<=10);
//	return 0;
//}

//��ϰ
//1.����n�Ľ׳�
//int main() {
//	int a = 1;
//	int n,i;
//	printf("***����n�Ľ׳�***\n");
//	while(1){
//		printf("������n:");
//		scanf("%d", &n);
//		i = n;
//		if (n == 0) {
//			a = 1;
//			printf("%d�Ľ׳�Ϊ:%d\n", n, a);
//			break;
//		}
//		else if (n < 0) {
//			printf("��������������\n");
//			continue;
//		}
//		else {
//			for (; n > 1; n--) {
//				a *= n;
//			}
//			printf("%d�Ľ׳�Ϊ:%d\n", i, a);
//			break;
//		}
//	}
//	return 0;
//}

//2.����1!+2!+��+10!�Ľ׳�
//int main() {
//	int a = 1;
//	int n,sum=0;
//	printf("***����1!+2!+��+10!�Ľ׳�***\n");
//	for (n=1; n <=10; n++) {
//		a *= n;
//		sum += a;
//		}
//	printf("sum=%d\n",sum);
//	return 0;
//	  }

//����˳������
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (k == arr[i]) {
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;//�ҵ���������
//		}
//	}
//	if(i==sz)
//		printf("û�ҵ���\n");
//	return 0;
//}

//�۰����


//����1 //��д���룬��ʾ����ַ��������ƶ������м��� #include <stdio.h>
//int main()
//{
//    char arr1[] = "welcome to bit..."; char arr2[] = "#################"; int left = 0;
//    int right = strlen(arr1) - 1; printf("%s\n", arr2); //whileѭ��ʵ��
//    while (left <= right)
//    {
//        Sleep(1000);
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        left++;
//        right--;
//        printf("%s\n", arr2);
//    }
//    //forѭ��ʵ��
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