#include "stdio.h"

int main() {
	int num,max=0;									//max��¼С������������������
	int zs[100] = {0};								//�������ڴ������
	printf("������һ��������");
	scanf("%d", &num);
	if (num<2)
	{
		printf("������һ������2������\n");
		return 0;
	}
	else
	{
												// �ж�������������������
		for (int i = 2; i < num; i++) {
			int flag = 1;						//��Լ��־
			for (int j = i / 2; j >= 2; j--) {
				if (i%j == 0)
					flag = 0;
			}
			if (flag)
				zs[max++] = i;				
		}
		for (int i = 4; i < num; i += 2) {		//��������С����������ż��
			int flag = 0;					//��־�Ƿ����ҵ����
			int a=2, b=2,a_count=1,b_count=1;		//a��bΪ���������е���
			for (a=2; a < i; a = zs[a_count++]) {
				for (b=2,b_count = 1; b < i; b = zs[b_count++]) {
					if (a+b==i)
					{
						printf("%d��������������%d��%d����\n", i, a, b);
						flag = 1;
						break;
					}
				}
				if (flag)
					break;
			}								//�����������������Ѱ�������
		}
	}
	return 0;
}