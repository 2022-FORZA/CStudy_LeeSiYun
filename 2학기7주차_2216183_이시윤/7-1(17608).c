#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int s[100000];
int main(){
	int count = 0, n,max=0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &s[i]);
	}
	for (int i = n-1; i >= 0; i--) {
		if (max < s[i]) max = s[i],count++;
		
	}
	printf("%d", count);
}