// week08-5.cpp SOIT106_ADVANCE_003
#include <stdio.h>
int main()
{
    int a[20];
    int N = 0;

    // 第一個迴圈：負責「輸入」與「計數」
    for(int i=0; i<20; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 0) break; // 如果輸入的是 0，就立刻跳出迴圈
        N++; // 若不是 0，有效數字數量加 1
    }

    // 第二個迴圈：負責「反向輸出」
    for(int i=N-1; i>=0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
