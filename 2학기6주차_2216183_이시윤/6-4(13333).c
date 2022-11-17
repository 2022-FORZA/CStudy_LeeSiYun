#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n, s[1001], max = 0, count = 0, j, i;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &s[i]);
	}
	
	for (i = 0; i < n; i++) {
		if(max < s[i])  max = s[i];
	}

	for (j = 0; j <= max; j++) {
		count = 0;
		for (i = 0; i < n; i++) {
			if (s[i] >= j) count++;
		}
		if (count == j) break;
	}
	if (max == 0) j--;
	printf("%d", j);

}