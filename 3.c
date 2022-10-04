#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int height[9];
	int num;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &height[i]);
	}
	for (int j = 0; j < 9; j++) {
		for (int i = 0; i < 8; i++) {
			int mid = 0;
			if (height[i] > height[i + 1]) {
				mid = height[i];
				height[i] = height[i + 1];
				height[i + 1] = mid;

			}
		}
	}

		for (int i = 0; i < 9; i++) {
		printf("%d\n", height[i]);
	}
}