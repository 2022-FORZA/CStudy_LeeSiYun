#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int man,j,i,count=0;
	char game, name[100000];

	scanf("%d ", &man);
	scanf("%c", &game);

	
	for (i = 0; i < man; i++) {
		scanf("%s", &name[i]);
		j = 0;//i=6
		printf("%d %d\n", i, j);//확인용1
		while (j < i && (name[i] != name[j])) {
			j++;
			printf("%d %d\n", i, j);//확인용2
		}
		if (j == i) count++;
	}
	
	
	if (game == 'Y') printf("%d", count);
	else if (game == 'F') printf("%d", count / 2);
	else if (game == 'O') printf("%d", count / 3);
	
}