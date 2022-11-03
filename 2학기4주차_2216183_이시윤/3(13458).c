#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>

long long A[1000001];
int main() {
	long long N;
	long long B, C;
	long long count=0;
	scanf("%lld", &N);

	for (int i = 0; i < N; i++) {
		scanf("%lld", &A[i]);
	}
	scanf("%lld %lld", &B, &C);

	for (int i = 0; i < N; i++) {
		A[i] -= B;
		count++;
		if (A[i] > 0) {
			count += (A[i] - 1) / C + 1;
		}

	}

	printf("%lld", count);
	return 0;
}