#include <stdio.h>
main()
{
	int c = 1;
	char a[1001], b[1001];
	while (scanf("%s %s", a, b))
	{
		int x[26] = { 0 }, y[26] = { 0 }, i;

		if (a[0] < 97) break;
		for (i = 0; a[i]; i++) x[a[i] - 97]++;
		for (i = 0; b[i]; i++) y[b[i] - 97]++;
		for (i = 0; i < 26; i++) if (x[i] != y[i]) break;


		printf("Case %d: ", c++);
		if (i != 26) printf("different\n");
		else printf("same\n");
	}
}