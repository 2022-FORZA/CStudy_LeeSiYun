#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sort(int num[], int n) {
	int i, j, temp;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n-1-i; j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", num[i]);
	}

	
}

int main() {
	int num[100], n;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	sort(num, n);

	
}