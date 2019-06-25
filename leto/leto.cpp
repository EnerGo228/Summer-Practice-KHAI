/**
* @file leto.cpp
* @author Макаревский В.Е., гр. 515Б
* @date 25 июня 2019
* @brief Летняя практика
*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
	int x1, x2, x3, x4, y1, y2, y3, y4;
	double k1, k2, b1, b2, x, y;
	setlocale(LC_CTYPE, "rus");
	printf("Введите координаты точки A: ");
	scanf_s("%d %d", &x1, &y1);
	printf("Введите координаты точки B: ");
	scanf_s("%d %d", &x2, &y2);
	printf("Введите координаты точки C: ");
	scanf_s("%d %d", &x3, &y3);
	printf("Введите координаты точки D: ");
	scanf_s("%d %d", &x4, &y4);
	if (x1 >= x2) {
		x1 = x1 + x2;
		x2 = x1 - x2;
		x1 = x1 - x2;
		y1 = y1 + y2;
		y2 = y1 - y2;
		y1 = y1 - y2;
	}
	if (x3 >= x4) {
		x3 = x3 + x4;
		x4 = x3 - x4;
		x3 = x3 - x4;
		y3 = y3 + y4;
		y4 = y3 - y4;
		y3 = y3 - y4;
	}
	if (x2 == x1) k1 = 0;
	else k1 = (y2 - y1) / (x2 - x1);
	if (x3 == x4) k2 = 0;
	else k2 = (y4 - y3) / (x4 - x3);
	if (k1 == k2) {
		printf("Прямые параллельны. Отрезки пересекаться не могут.");
		_getch();
		return 0;
	}
	b1 = y1 - k1 * x1;
	b2 = y3 - k2 * x3;
	x = (b2 - b1) / (k1 - k2);
	y = k1 * x + b1;
	if (((x < x2) && (x > x1)) && ((x > x3) && (x < x4))) printf("Отрезки пересекаются.");
	else printf("Отрезки не пересекаются.");
	_getch();
	return 0;
}
