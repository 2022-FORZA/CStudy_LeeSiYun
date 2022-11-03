#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS



int check(char s[]) {
	for (int i = 0; i < strlen(s); i++) {
		for (int j = i + 1; j < strlen(s); j++) {
			if (s[i] == s[j]) {
				if (s[j] == s[j-1]) continue;
				else return 0;
			}
		}
	}
	return 1;
}


int main() {
	int N, sum=0;
	char s[100];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", s);
		sum += check(s);
	}
	printf("%d", sum);
}