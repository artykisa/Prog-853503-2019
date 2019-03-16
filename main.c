//
//  main.c
//  lab1.2
//
//  Created by Katya Risunova on 2/18/19.
//  Copyright © 2019 Katya Risunova. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    printf("Введите два числа\n");
    int k,l;
    printf("Делимое: ");
    scanf ("%d", &k);
    printf ("Делитель: ");
    scanf ("%d", &l);
    if (k % l != 0)
    {
        printf ("вы ввели неверные данные\n");
        return (0);
    }
    printf ("%d %s %d %s", k, "\t|\t", l, "\n");
    int kolvoCifr1;
    kolvoCifr1 = log10 (k) + 1;
    
    int chislo1 [ 10 ];
    for (int i=0; i < kolvoCifr1; i++)  //разбиваем число на массив цифр
    {
        int temp = pow (10, i);
        chislo1[i] = k / temp;
        chislo1[i] = chislo1[i] % 10;
    }
    int j = 1, h = chislo1[kolvoCifr1 - 1];
    while (h < l)   //находим первое подходящее число для начала деления
        h = h * 10 + chislo1[kolvoCifr1 - 1 - (j++)];
    
    
    int temp = kolvoCifr1 - j - 1, chastnoe = 0, raz = 0;
    
    while (temp >= 0)
    {
        while (chastnoe * l <= h)
            chastnoe++;
        
        chastnoe--;
        
        for(int i = 0; i < raz; i++)
            printf(" ");
        raz++;
        printf("%d", chastnoe * l);
        
        
        if (temp == kolvoCifr1 - j - 1) //выводим ответ, если это первый шаг деления
        {
            for (int d = 0; d < kolvoCifr1; d++)
                printf (" ");
            printf ("\t\t%d", k / l);
        }
        printf("\n---------\n");
        h = (h - chastnoe * l) * 10 + chislo1[temp--];
        for(int i = 0; i < raz; i++)
            printf(" ");
        
        printf("%d", h);
        printf("\n");
        
    }
    chastnoe=h/l;
    for(int i = 0; i < raz; i++)
        printf(" ");
    if (kolvoCifr1 < 3)
        printf("%d \t\t \n%s \n %d %s", h, "--------", 0,"\n");
    else
        printf("%d\t\t \n%s \n %d %s", h, "--------", 0,"\n");
}
