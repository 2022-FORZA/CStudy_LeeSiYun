#include <stdio.h>
#include <stdlib.h>
int s[10000001];
int main(){
	int n,i,sum1=0,sum2=0;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &s[i]);
		sum1 += i + 1;
	}
	sum1 -= n;
	
	for (i = 0; i < n; i++) {
		sum2 += s[i];
	}
	
	printf("%d", abs(sum1 - sum2));
}