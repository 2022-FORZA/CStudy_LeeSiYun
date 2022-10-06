#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int test;

	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		int person, grade[1000], count = 0;
		int sum = 0;
		double average, result;

		scanf("%d", &person);

		for (int j = 0; j < person; j++) {
			scanf("%d", &grade[j]);
			sum += grade[j];
		}

		average = (double)sum / (double)person;

		for (int j = 0; j < person; j++) {
			if (grade[j] > average) count++;
		}

		result = ((double)count / (double)person) * 100;

		printf("%.3f%%\n", result );
	}
}