#include <stdio.h>

int main() {
	long long N;
	int i, sum = 0;
	scanf("%lld", &N);
	for (i = 0; sum < N; i++) {
		sum += 6*i;
		if (i == 0) {
			sum++;
		}
	}
	printf("%d", i);
}