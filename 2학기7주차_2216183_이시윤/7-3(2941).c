#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	scanf("%s", s);
    int count = strlen(s);

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '=') {
            if (s[i - 1] == 'c') count--;
            if (s[i - 1] == 's') count--;
            if (s[i - 1] == 'z') {
                count--;
                if (s[i - 2] == 'd') count--;
            }
        }
        if (s[i] == '-') {
            if (s[i - 1] == 'c') count--;
            if (s[i - 1] == 'd') count--;
        }
        if (s[i] == 'j') {
            if (s[i - 1] == 'l') count--;
            if (s[i - 1] == 'n') count--;
        }
    }
	printf("%d", count);
}