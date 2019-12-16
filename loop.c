#include<stdio.h>

int main()
{
	/*반복문*/
	for(int i=0; i<10; i++)
	printf("Hello World\n");

	printf("\n");

	//------------------------
	int j = 0;
	while (j <= 10)
	{
		printf("Hello 횟수: %d\n", j++);
	}

	printf("\n");
	//------------------------
	int k = 0;
	do {
		printf("HW %d \n",k++);
	} while (k <= 10);

	//-----------------------
	/*2중 반복문*/
	for (int i = 1; i <= 3; i++)
	{
		printf("첫번째 반복문 : %d\n", i);
			for (int b = 1; b <= 5; b++)
			{
				printf("       두번째 반복문 : %d\n", b);
			}
	}


	//--------------------
	/*구구단*/
	for (int i = 2; i <= 9; i++)
	{
		printf("%d단 \n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf(" %d x %d = %d\n", i, j, i*j);
		}
	}

	//---------------------
	//별찍기

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <=i; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}


	//역으로 별찍기
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



	//피라미드를 쌓아라 - 프로젝트
	/*
	
	SSSS*SSSS
	SSS***SSS
	SS*****SS
	S*******S
	*/
	
	int floor;
	printf("몇층으로 쌓겠느냐?");
	scanf_s("%d", &floor);

	//층수
	for (int i = 0; i < floor; i++)
	{
		//옆에 공백만들기
		for (int j = i; j < floor-1; j++)
		{
			printf(" ");
		}

		//층을 올라가면서 조건에 맞게 별찍기
		for (int k = 0; k < i*2+1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}