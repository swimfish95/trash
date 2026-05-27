// week14-6.cpp SOIT108_Advance_014b
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);


    int zeros = 1;

    while (N > 0) {
        // N % 10 ъ程计ウ盡妮 (zeros)
        printf("%d ", (N % 10) * zeros);

        N = N / 10;         // 奔程计
        zeros = zeros * 10;
    }

    return 0;
}
