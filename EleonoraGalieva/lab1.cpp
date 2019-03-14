#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <iostream>
/*
6 вариант. Задание: найти сумму первых трех цифр дробной части вещественного числа.
*/
int StrToInt(char str)
{
	switch (str)
	{
	case '1': return 1; break;
	case '2':return 2; break;
	case '3':return 3; break;
	case '4':return 4; break;
	case '5':return 5; break;
	case '6':return 6; break;
	case '7':return 7; break;
	case '8':return 8; break;
	case '9':return 9; break;
	case '0':return 0; break;
	default: return 0; break;
	} 
}

int main()
{
	setlocale(LC_ALL, "Russian");
	char chislo[100];
	printf("Введите дробное число:\n");
	int fl = 0;
	gets_s(chislo);//Записываем дробное число как массив символов
	int length = strlen(chislo);//Вычисление длины введенной строки 
	for (int i = 0; i < length; i++)
	{
		if (chislo[i] >= 'А'&&chislo[i] <= 'я' || chislo[i] >= 'A'&&chislo[i] <= 'z')
		{
			printf("Ошибка ввода\n");
			fl = 1;
			break;
		}
	}
	for (int i = 0; i < length; i++)
	{
		if (fl == 1)
			break;
			if (chislo[i] == '.' || chislo[i] == ',')
			{
				int temp1 = i;//Сохраняем номер элемента с точкой 
				int summa = 0;
				for (int j = temp1 + 1; j <= temp1 + 3; j++)
				{
					if (chislo[j] == '.' || chislo[j] == ',')
					{
						printf("Ошибка ввода\n");
						fl = 1;
						break;
					}					
					int temp2 = StrToInt(chislo[j]);//Перевод символа в цифру для последующего сложения 
					summa += temp2;
					if (j >= length)//На случай, если пользователь ввел не 3(как нужно по условию), а меньшее кол-во цифр после запятой
						break;//Выход из цикла
				}
				if (fl == 1)
					break;
				printf("Сумма первых трех чисел после запятой:\n%d", summa);//Выводится сумма цифр
			}
		}
	system("pause");
	return 0;
	}
	
