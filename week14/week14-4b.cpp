//week14-4b
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int a = N / 1000;
    int b = N / 100 % 10;
    int c = N / 10 % 10;
    int d = N % 10;

    // a(千) 和 d(個) 比對，b(百) 和 c(十) 比對
    if (a == d && b == c) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
