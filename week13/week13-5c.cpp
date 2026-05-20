#include <stdio.h>


int f(int N)
{
    int ans = 0; // 準備一個撲滿裝反轉後的數字


    while (N > 0) {
        ans = ans * 10 + N % 10; // 剝下尾數，移位並拼接到 ans
        N = N / 10;              // 砍掉原本數字的尾巴
    }

    return ans; // 迴圈結束後，把反轉好的數字丟回去給呼叫它的人
}

int main()
{
    int N;
    scanf("%d", &N); // 讀取使用者輸入的數字


    printf("%d\n", f(N));

    return 0;
}
