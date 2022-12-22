#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()

{
    int N, M;
    char s1[100];

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", s1);
        for (int j = 0; j < M / 2; j++)
        {
            if (s1[j] != '.')
                s1[M - 1 - j] = s1[j];
        }

        for (int j = M - 1; j >= M / 2; j--)
        {
            if (s1[j] != '.')
                s1[M - 1 - j] = s1[j];
        }
        printf("%s\n", s1);
    }

    return 0;
}