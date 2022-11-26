#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <ctype.h>

int main() {
	char s[2001];
	int k, alpha[26] = { 0, }, alpha2[26] = { 0, };

	scanf("%s", s);
	scanf("%d", &k);

	for (int i = 0; i < strlen(s); i++) {
		if (islower(s[i])) s[i] -= 32;

		if (i == 0) {
			alpha[s[i] - 'A']++;
		}

		else if (s[i] != s[i - 1]) {
			alpha2[s[i - 1] - 'A'] = 1;
			if (alpha2[s[i] - 'A'] != 1) alpha[s[i] - 'A']++;
		}
		else if (s[i] == s[i - 1] && alpha2[s[i] - 'A'] == 0) alpha[s[i] - 'A']++;
	}
	
	/*for (int i = 0; i < 26; i++) {
		printf("%d", alpha[i]);
	}
	printf("\n");
	for (int i = 0; i < 26; i++) {
		printf("%d", alpha2[i]);
	}
	printf("\n");*///È®ÀÎ¿ë
	for (int i = 0; i < 26; i++) {
		if (alpha[i] == 0) continue;
		else if (alpha[i] >= k) printf("1");
		else if (alpha[i] < k) printf("0");
	}

}

