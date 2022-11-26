#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
int main() {
	char s[30001], key[30001], result[30001];

	scanf("%[^\n]s", s);
	scanf("%s", key);

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') result[i] = ' ';
		else {
			char c = s[i] - (key[i % strlen(key)] - 'a')-1;
			if (c < 'a') c += 26;
			result[i] = c;
 		}
	}
	result[strlen(s)] = '\0';
	printf("%s", result);
}