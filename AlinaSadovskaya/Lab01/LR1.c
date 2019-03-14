#include <stdio.h>
#include <stdlib.h>

long fact(int, int);

int main(void)
{
	long double sum = 0, comp;                    //Объявление переменных суммы и произведения (long double, так как необходимо большее максимальное значение)
	int n;
	printf("Input n: ");   //Число должно быть меньше 30, иначе происходит выход за пределы допустимых значений
	scanf("%d", &n);                            //Ввод натурального числа
	for (int k = 1; k <= n; k++) {
		comp = 1;                                 //Вычисляем произведение на каждой итерации 
		for (int t = 1; t <= k; t++) {
			comp *= fact(k, t);
		}
		sum += comp;                              //Вычисляем сумму произведений 
	}
	printf("sum = %1.0lf\n", sum);              //Вывод результата
	return 0;
}

long fact(int i, int j) {                            //Функция для вычисления выражения, которое с учетом мат.преобразований
	int temp = i + 1; long factorial = i + 1;    //сводится к виду (i+1)*(i+2)*...*(i+j)
	while (temp < i + j) {
		temp++;
		factorial *= temp;
	}
	return factorial;
}
