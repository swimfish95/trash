// week10-4.cpp A035
#include <stdio.h>

int main()
{
    int a[100];

    // 1. 弄 100 计
    for (int i=0; i<100; i++) {
        scanf("%d", &a[i]);
    }

    // 2. ユ传逼猭 (パ)
    for (int i=0; i<100; i++) {
        for (int j=i+1; j<100; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // 3. 逼计 (皌秆肈╰参箇砞Α)
    for (int i=0; i<100; i++) {
        // フゲ斗 %d 玡
        printf(" %d", a[i]);

        // –Ч 10 计ぃ琌程计碞传︽
        if (i % 10 == 9 && i != 99) {
            printf("\n");
        }
    }

}
