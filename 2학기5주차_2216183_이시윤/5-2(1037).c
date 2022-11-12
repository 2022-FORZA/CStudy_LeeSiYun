#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int N ,max=0,min=1000000,A;

	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &A);
		if (max < A) {
			max = A;
		}
		if (min > A) {
			min = A;
		}
	}

	printf("%d",max*min);
	
}