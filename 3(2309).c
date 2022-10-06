#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int height[9];
	int sum=0,remain,fake1,fake2;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &height[i]);
		sum += height[i];
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
	remain = sum - 100;

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (remain == height[i] + height[j]) {
				fake1 = i, fake2 = j;
				break;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		if (i == fake1 || i == fake2) {
			continue;
		}
		printf("%d\n", height[i] );
	}
}