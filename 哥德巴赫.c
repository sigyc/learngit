#include "stdio.h"

int main() {
	int num,max=0;									//max记录小于输入数的质数个数
	int zs[100] = {0};								//数组用于存放质数
	printf("请输入一个整数：");
	scanf("%d", &num);
	if (num<2)
	{
		printf("请输入一个大于2的整数\n");
		return 0;
	}
	else
	{
												// 判断质数并加入质数数组
		for (int i = 2; i < num; i++) {
			int flag = 1;						//可约标志
			for (int j = i / 2; j >= 2; j--) {
				if (i%j == 0)
					flag = 0;
			}
			if (flag)
				zs[max++] = i;				
		}
		for (int i = 4; i < num; i += 2) {		//尝试所有小于输入数的偶数
			int flag = 0;					//标志是否已找到组合
			int a=2, b=2,a_count=1,b_count=1;		//a，b为质数数组中的数
			for (a=2; a < i; a = zs[a_count++]) {
				for (b=2,b_count = 1; b < i; b = zs[b_count++]) {
					if (a+b==i)
					{
						printf("%d可以由两个质数%d和%d构成\n", i, a, b);
						flag = 1;
						break;
					}
				}
				if (flag)
					break;
			}								//在质数数组里面遍历寻找相加数
		}
	}
	return 0;
}