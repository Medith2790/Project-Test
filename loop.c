#include<stdio.h>

int main()
{
	/*�ݺ���*/
	for(int i=0; i<10; i++)
	printf("Hello World\n");

	printf("\n");

	//------------------------
	int j = 0;
	while (j <= 10)
	{
		printf("Hello Ƚ��: %d\n", j++);
	}

	printf("\n");
	//------------------------
	int k = 0;
	do {
		printf("HW %d \n",k++);
	} while (k <= 10);

	//-----------------------
	/*2�� �ݺ���*/
	for (int i = 1; i <= 3; i++)
	{
		printf("ù��° �ݺ��� : %d\n", i);
			for (int b = 1; b <= 5; b++)
			{
				printf("       �ι�° �ݺ��� : %d\n", b);
			}
	}


	//--------------------
	/*������*/
	for (int i = 2; i <= 9; i++)
	{
		printf("%d�� \n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf(" %d x %d = %d\n", i, j, i*j);
		}
	}

	//---------------------
	//�����

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <=i; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}


	//������ �����
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}



	//�Ƕ�̵带 �׾ƶ� - ������Ʈ
	/*
	
	SSSS*SSSS
	SSS***SSS
	SS*****SS
	S*******S
	*/
	
	int floor;
	printf("�������� �װڴ���?");
	scanf_s("%d", &floor);

	//����
	for (int i = 0; i < floor; i++)
	{
		//���� ���鸸���
		for (int j = i; j < floor-1; j++)
		{
			printf(" ");
		}

		//���� �ö󰡸鼭 ���ǿ� �°� �����
		for (int k = 0; k < i*2+1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}