#include <stdio.h>
#include <string.h>

int main() {
	int alpha1[26] = { 0, }, alpha2[26] = { 0, };
	char c;
	int count = 0, *s = malloc(sizeof(char) * 1000);
	

	while (1) {
		scanf("%s",s);
		
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] <= 'a' && s[i] <= 'z') {
				alpha1[s[i] - 'a']++;
			}
		}
		for (int i = 0; (c = getchar()) != '\0'; i++) {
			alpha2[c - 'a']++;
		}

		if (alpha1==alpha2) {
			printf("Case %d: same", count);
			count++;
		} 
		else if (alpha1 != alpha2) {
			printf("Case %d: different", count);
			count++;
		}

		else if (s == "END") {
			break;
		}
	}




}