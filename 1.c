#include<stdio.h>

int main()
{
	int age;
	printf("请输入年龄");
	scanf("%d",&age);
	if (age >= 18) {
		printf("你已成年 恭喜");
	}
	else {
		printf("抱歉 未成年");
	}

	return 0;
}