#include <stdio.h>

int main() {
	int N, n[101] = { 0, }, max;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &n[i]);
	}
	for (int i = 0; i < N; i++) {
		max = n[i] / 2;
		printf("Pairs for %d:", n[i]);
		for (int j = 1; j <= max; j++) {
			if (j != n[i] - j && j == 1) printf(" %d %d", j, n[i] - j);
			
			else if (j != n[i] - j && j != 1)printf(", %d %d", j, n[i] - j);
		}
		printf("\n");
	}
}