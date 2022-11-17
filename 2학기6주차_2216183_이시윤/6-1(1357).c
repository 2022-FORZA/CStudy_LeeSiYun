#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int rev(int x) {
	int result = 0;
	while (x) {
		result *= 10, result += x % 10, x /= 10;
	}
	return result;
}

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", rev(rev(x) + rev(y)));
}