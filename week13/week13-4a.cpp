// week13-4a.cpp SOIT106_ADVANCE_002
#include <stdio.h>


int gcd(int a, int b)
{
    // 終止條件 (Base Case)：如果其中一個數字變成 0 了，另一個數字就是答案
    if (a == 0) return b;
    if (b == 0) return a;

    // 遞迴呼叫 (Recursive Call)：如果都還沒變成 0，就繼續往下除
    // 把 (b) 當成新的 a，把 (a%b 餘數) 當成新的 b，再次呼叫自己！
    return gcd(b, a % b);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    // 呼叫我們自己寫的 gcd 函式來幫忙算答案
    int ans = gcd(a, b);

    // 印出約分後的結果
    printf("%d %d\n", a/ans, b/ans);

    return 0;
}
