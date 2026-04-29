// week10-5.cpp SOIT106_ADVANCE_001
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N); // 讀取使用者輸入的數字

    // ans 用來裝反轉後的新數字，N2 用來「備份」原本的 N
    int ans = 0, N2 = N;

    // 當 N 還大於 0 時，繼續拆解數字
    while ( N > 0 ) {
        // printf("%d", N % 10 ); // (老師註解掉的測試代碼)

        // 核心邏輯：把目前的 ans 進位 (*10)，並加上 N 的最後一位數 (N % 10)
        ans = ans * 10 + N % 10;

        // printf("N:%d ans:%d\n", N, ans); // (老師註解掉的測試代碼)

        // 把 N 的最後一位數去掉 (整數除以 10)
        N = N / 10;
    }

    // 印出：原數字 + 反轉數字 = 總和
    printf("%d+%d=%d\n", N2, ans, N2+ans);

    return 0;
}
