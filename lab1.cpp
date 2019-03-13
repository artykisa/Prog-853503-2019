//Вариант 13
#include "pch.h"
#include <iostream>
#include<conio.h>
int main()
{
	setlocale(LC_ALL, "Russian");
eshe: system("cls");
	printf( "Введите свое число до 100, которое я конвертирую в словесный вариант!\n"); 
	char a[50];
	gets_s(a);
	int len;
	if (a[1] == '\0') len = 1;
	else {
		if (a[2] == '\0')  len = 2;
		else { printf("Неправильный ввод!\n Попробуйте еще раз . . ."); _getch(); goto eshe; }
	}
	if (len > 2) { printf("Неправильный ввод!\n Попробуйте еще раз . . ."); _getch(); goto eshe; }
	for (int i = 0; i < len; i++) {
		if (a[i] != '0' && a[i] != '1' && a[i] != '2' && a[i] != '3'&& a[i] != '4' && a[i] != '5' && a[i] != '6'&& a[i] != '7' && a[i] != '8' && a[i] != '9') {
			printf("Неправильный ввод!\n Попробуйте еще раз . . ."); _getch(); goto eshe;
		}
	}
	if (a == "00") {
		printf("Ноль\n") ;
		_getch();
		return 0;
	}
	if (len == 1)
	{
		switch(a[0]){
		case '1':  printf("Один\n");    _getch(); return 0; break;
		case '2':  printf("Два\n");     _getch(); return 0; break;
		case '3':  printf("Три\n");     _getch(); return 0; break;
		case '4':  printf("Четыре\n");  _getch(); return 0; break;
		case '5':  printf("Пять\n");    _getch(); return 0; break;
		case '6':  printf("Шесть\n");   _getch(); return 0; break;
		case '7':  printf("Семь\n");    _getch(); return 0; break;
		case '8':  printf("Восемь\n");  _getch(); return 0; break;
		case '9':  printf("Девять\n");  _getch(); return 0; break;
		case '0':  printf("Ноль\n");    _getch(); return 0; break;
	                }
	}
	if (len == 2) {
		
			switch (a[0]) {
			case '1': switch (a[1]) {
				case '1': printf("Одиннадцать\n");    _getch(); return 0; break;
				case '2': printf("Двенадцать\n");     _getch(); return 0; break;
				case '3':  printf("Тринадцать\n");    _getch(); return 0; break;
				case '4':  printf("Четырнадцать\n");  _getch(); return 0; break;
				case '5': printf("Пятнадцать\n");     _getch(); return 0; break;
				case '6':  printf("Шестнадцать\n");   _getch(); return 0; break;
				case '7':  printf("Семнадцать\n");    _getch(); return 0; break;
				case '8':  printf("Восемнадцатьт\n"); _getch(); return 0; break;
				case '9':   printf("Девятнадцать\n"); _getch(); return 0; break;
				case '0':   printf("");               _getch(); return 0; break;
			}
				
			case '2':  printf( "Двадцать");   break;
			case '3':  printf("Тридцать");    break;
			case '4':  printf("Сорок");       break;
			case '5':  printf("Пятьдесят");   break;
			case '6':  printf("Шестьдесят");  break;
			case '7':  printf("Семьдесят");   break;
			case '8':  printf("Восемьдесят"); break;
			case '9':  printf("Девяносто");   break;
			case '0':  printf("");            break;
			}
			switch (a[1]) {
			case '1':  printf(" Один\n");   _getch(); return 0; break;
			case '2':  printf(" Два\n");    _getch(); return 0; break;
			case '3':  printf(" Три\n");    _getch(); return 0; break;
			case '4':  printf(" Четыре\n"); _getch(); return 0; break;
			case '5':  printf(" Пять\n");   _getch(); return 0; break;
			case '6':  printf(" Шесть\n");  _getch(); return 0; break;
			case '7':  printf(" Семь\n");   _getch(); return 0; break;
			case '8':  printf(" Восемь\n"); _getch(); return 0; break;
			case '9':  printf(" Девять\n"); _getch(); return 0; break;
			case '0':  printf(" Ноль\n");   _getch(); return 0; break;
			}
	}
	_getch();
	return 0;
}