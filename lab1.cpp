
#include <stdio.h>

int sym(int num)  // определяет кол-во символов 
{
	if (num / 10 < 1)
		return 1;
	else return 1 + sym(num / 10);
}

int main()
{
	int num;
	printf_s("input ur number: "); 
	scanf_s("%d", &num);
  
	while (num) {
		switch (sym(num))
		{
		case 1:
			if (num < 4)
			{
				for (int i = 0; i < num; i++)
				{
					printf_s("I"); 
				}
				num = 0;
				break;
			} 
			if (num == 4)
			{
				printf_s("IV"); num = 0; break;
			}
			if (num == 5)
			{
				printf_s("V"); num = 0; break;
			}
			if (num < 9)
			{
				printf_s("V");
				num -= 5;
				while (num)
				{
					printf_s("I");
					num--;
				}
				break;
			}
			if (num == 9)
			{
				printf_s("IX");
				num = 0;
				break;
			}
		case 2:
			if (num < 40)
			{
				while (num > 9)
				{
					printf_s("X");
					num -= 10;
				}
				break;
			}
			if (num < 50)
			{
				printf_s("XL");
				num -= 40;
				break;
			}
			if (num < 90) 
			{
				printf_s("L");
				num -= 50;
				while (num / 10)
				{
					printf_s("X");
					num -= 10;
				}
				break;
			}
			if (num > 90) {
				printf_s("XC");
				num -= 90;
				break;
			}
		case 3:
			if (num < 400) 
			{
			while (num / 100)
			{
				printf_s("C");
				num -= 100;
			} 
			break;
			} 
			if (num <500) 
			{
			printf_s("CD");
			num -= 400;
			break;
			}
		if (num < 900)
		{
			printf_s("D");
			num -= 500;
			while (num / 100)
			{
				printf_s("C");
				num -= 100;
			}
			break;
		}
		if (num < 1000)
		{
			printf_s("CM");
			num -= 900;
			break;
		}
		case 4:
			if (num < 4000)
			{
				while (num / 1000)
				{
				printf_s("M");
				num -= 1000;
				} 
			break;

			}
			if (num < 5000)
			{
					printf_s("MZ"); // Z = 5000; A = 10000;
					num -= 4000;
					break;
			}
			if (num < 9000)
			{
					printf_s("Z");
					num -= 5000;
			}

			while (num / 1000)
			{
					printf_s("M");
					num -= 1000;
					break;
			}
		case 5:
			if (num < 40000)
			{
				while (num / 10000)
				{
					printf_s("A");
					num -= 10000;
				}
				break;
			}
		}
	}
}
