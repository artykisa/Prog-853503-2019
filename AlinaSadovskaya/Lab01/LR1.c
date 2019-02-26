#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

long fact(int, int);

int main(void)
{
	SetConsoleCP(1251);                           //Подключение файла для использования русского текста
	SetConsoleOutputCP(1251);
	long double sum = 0, comp;                    //Объявление переменных суммы и произведения (long double, так как необходимо большее максимальное значение)
	int n;
	printf_s("Введите количество слагаемых: ");   //Число должно быть меньше 30, иначе происходит выход за пределы допустимых значений
	scanf_s("%d", &n);                            //Ввод натурального числа
	for (int k = 1; k <= n; k++) {
		comp = 1;                                 //Вычисляем произведение на каждой итерации 
		for (int t = 1; t <= k; t++) {
			comp *= fact(k, t);
		}
		sum += comp;                              //Вычисляем сумму произведений 
	}
	printf_s("sum = %1.0lf\n", sum);              //Вывод результата
	system("pause");
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