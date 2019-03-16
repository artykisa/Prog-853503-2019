
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int m, m1, i = 0;//m-число, m1-копия, i-индекс массива
	int n;//значение элемента массива
	int reshenie[20];
	printf("Napishi chislo m?\n");
	scanf_s("%d", &m);
	m1 = m;//копия числа m
	for (int y = m; y > 0; y--)
	{
		_Bool proverka = true;
		m1 = y;
		while (m1)//перевод в двоичную систему числа и запись в массив
		{
			reshenie[i] = (m1 & 1);
			m1 = m1 >> 1;
			if (reshenie[i] == 0)
				proverka = false;
			i++;
		}
		if (proverka)//проверка на выполнение условия
		{
			printf("\n%d-", y);
			for (int l = 0; l < i; l++)
				printf("%d", reshenie[i]);
		}

		i = 0;

	}

	return 0;
}

