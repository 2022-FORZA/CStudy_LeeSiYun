#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char first[7] = { 0 }, second[7] = { 0 }, third[7] = { 0 };
	int num = 0;

	scanf("%s", first);
	if (first == "black") num += 0;
	else if (first == "brown") num += 10;
	else if (first == "red") num += 20;
	else if (first == "orange") num += 30;
	else if (first == "yellow") num += 40;
	else if (first == "green") num += 50;
	else if (first == "blue") num += 60;
	else if (first == "violet") num += 70;
	else if (first == "grey") num += 80;
	else if (first == "white") num += 90;

	scanf("%s", second);
	if (second == "black") num += 0;
	else if (second == "brown") num += 1;
	else if (second == "red") num += 2;
	else if (second == "orange") num += 3;
	else if (second == "yellow") num += 4;
	else if (second == "green") num += 5;
	else if (second == "blue") num += 6;
	else if (second == "violet") num += 7;
	else if (second == "grey") num += 8;
	else if (second == "white") num += 9;

	scanf("%s", third);
	if (third == "black") num += 1;
	else if (third == "brown") num *= 10;
	else if (third == "red") num *= 100;
	else if (third == "orange") num *= 1000;
	else if (third == "yellow") num *= 10000;
	else if (third == "green") num *= 100000;
	else if (third == "blue") num *= 1000000;
	else if (third == "violet") num *= 10000000;
	else if (third == "grey") num *= 100000000;
	else if (third == "white") num *= 1000000000;

	printf("%d", num);

}