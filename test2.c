```c
#include <stdio.h>

int main(void)
{
	int num;
	printf("请输入一个三位数：");
	scanf("%d", &num);

	int a = num / 100;        // 百位
	int b = num / 10 % 10;    // 十位
	int c = num % 10;         // 个位

	int reverse = c * 100 + b * 10 + a;
	printf("逆序结果：%d\n", reverse);

	return 0;
}
```
