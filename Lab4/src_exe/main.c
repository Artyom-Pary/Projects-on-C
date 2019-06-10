#include <head.h>
#include <stdio.h>

void main(void)
{
	double x;
	double result;
	do
	{
		printf("press to select:\n1 - Task1\n2 - Task2\n3 - Exit");
		switch (_getch())
		{
		case'1':
			system("cls");
			printf("Selected case 1\nEnter x: ");
			scanf_s("%f", &x);
			f(&x, &result);
			printf("%f\n\r", result);
			break;
		case'2':
			system("cls");
			sortStackArray();
			break;
		case'3':
			exit(0);
		}
		system("pause");
		system("cls");
	} while (1);
}
