//Вариант №26
//Условие:

//Найти все натуральные числа от 1 до 1000, которые совпадают
//с последними разрядами своих квадратов, например: 25^2 =
//625; 76^2 = 5676.

#include <stdio.h>
#include <math.h>

int getCountsOfDigits(int number) {
    int count = (number == 0) ? 1 : 0;
    while (number != 0) {
        count++;
        number /= 10;
    }
    return count;
}

int main() {
    for (int i = 1; i <= 1000; i++) {
        int numberOfDigits = getCountsOfDigits(i), iInSquare = pow(i, 2), forSeparationFromDivision = 1;

        for (int j = 0; j < numberOfDigits; j++) {
            forSeparationFromDivision *= 10;
        }

        if (iInSquare % forSeparationFromDivision == i) {
            printf("%u^2 = %u\n", i, iInSquare);
        }

        forSeparationFromDivision = 10;
    }
    return 0;
}
