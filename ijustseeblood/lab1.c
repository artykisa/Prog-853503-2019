//вариант 3
#include "pch.h"
#include <stdio.h>
#include<math.h>

int main()
{
	int k, num, n, i, sym, ammount, a;
	ammount = 0;
	i = 0;
	printf("vvedite k\n");
	scanf_s("%d", &k);
	while (ammount < k) {
		i++;
		num = pow(i, 3);
		sym = 1;
		n = 10;
		while (num / n != 0) {
			n *= 10;
			sym++;
		}
		ammount += sym;
		printf("%d", num);
	}
	ammount -= sym; //возвращаюсь на 1 число назад
	n = n / 10;
	while (ammount != k)
	{
		a = (num / n) % 10;
		n = n / 10;
		ammount++;

	}
	printf("\n%d", a);

}
