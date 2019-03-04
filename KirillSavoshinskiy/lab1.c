//Вариант 23 

#include "pch.h"
#include <stdio.h>
 

int main()
{
	int x, y, k;
	int left, right;
	printf ("Enter interval boundaries :\n");
	printf ("left = ");
	scanf_s ("%d", &left);
	printf ("right = ");
	scanf_s ("%d", &right);
	printf ("First 10 pythagorean triples :\n");
	int count = 0;
		for (int k = left; k <= right; k++)
		{
			for (int x = left; x <= right; x++)
			{
				for (int y = left; y <= right; y++)
				{
					if (x * x + y * y == k * k && count<10)
					{
							printf("%d^2 + %d^2 = %d^2\n",x,y,k);
							count++;
					}
				}
			}
		}
}
