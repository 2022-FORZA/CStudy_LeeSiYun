#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	char s[100];
	int c;


	scanf("%[^\n]s", &s);

	for (int i = 0; s[i] != '\0'; i++) {
		c = s[i];
		if (c >= 'A' && c <= 'M') {
			s[i] = c + 13;
		}

		else if (c >= 'N' && c <= 'Z') {
			s[i] = c - 13;
		}

		else if (c >= 'a' && c <= 'm') {
			s[i] = c + 13;
		}
		else if (c >= 'n' && c <= 'z') {
			s[i] = c - 13;
		}
		
		printf("%c", s[i]);
		
	}

	
}