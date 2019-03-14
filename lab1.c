// Вариант 20
#include "pch.h"
#include <stdio.h>
#include <string.h>

int whole_sum_function(char str_num[], int &index);
int fractional_sum_function(char str_num[], int &index, int str_num_length);

int main()
{
	printf( "Write your number: ");
	char str_num[256];
	gets_s(str_num, 256);
	int str_num_length = strlen(str_num); // узнаю длину числа с точкой
	int index = 0;  // с этим индексом будем перебирать все цифры числа
	int whole_sum_result = whole_sum_function(str_num, index);
	int fractional_sum_result = fractional_sum_function(str_num, index, str_num_length);
	if (whole_sum_result > fractional_sum_result)
	{
		printf("Whole sum: %d", whole_sum_result);
	}
	else if (fractional_sum_result > whole_sum_result)
	{
		printf("Fractional sum: %d", fractional_sum_result);
	}
	else
	{
		printf("Whole and fractional sum are the same: %d", whole_sum_result);
	}
}

int whole_sum_function(char str_num[], int &index)
{
	int whole_sum_result = 0;
	while (str_num[index] != '.' && str_num[index] != ',')
	{
		whole_sum_result += str_num[index] - '0';
		index++;
	}
	return whole_sum_result;
}

int fractional_sum_function(char str_num[], int &index, int str_num_length)
{
	int fractional_sum_result = 0;
	while (str_num[index] == '.' || str_num[index] == ',')
	{
		index++;
	}
	while (index < str_num_length)
	{
		fractional_sum_result += str_num[index] - '0';
		index++;
	}
	return fractional_sum_result;
}
