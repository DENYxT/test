#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int* pi = &i;
	char input[100] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ���������롰��������ȡ���ػ�\n�����룺>");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
		printf("�ɹ�ȡ��������\n");
	zaiyici:
		printf("���롰1�������˳�����ֱ�ӹرմ���\n");
		scanf("%d", pi);
		if (*pi == 1)
		{
			goto tuichu;
		}
		else
		{
			printf("�����������������\n");	
			goto zaiyici;
		}
	}
	else
	{
		goto again;
	}

tuichu:
	return 0;
 } 
