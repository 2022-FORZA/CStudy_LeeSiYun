#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int W[10], K[10],temp,W_score=0,K_score=0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &W[i]);
	}
	for (int i = 0; i < 10; i++) {
		for (int j = i - 1; j >= 0 && W[j] > W[j + 1]; j--) {
			temp = W[j]; W[j] = W[j + 1]; W[j + 1] = temp;
		}
	}
	W_score = W[9] + W[8] + W[7];

	for (int i = 0; i < 10; i++) {
		scanf("%d", &K[i]);
	}
	for (int i = 0; i < 10; i++) {
		for (int j = i - 1; j >= 0 && K[j] > K[j + 1]; j--) {
			temp = K[j]; K[j] = K[j + 1]; K[j + 1] = temp;
		}
	}
	K_score = K[9] + K[8] + K[7];

	printf("%d %d", W_score, K_score);

}