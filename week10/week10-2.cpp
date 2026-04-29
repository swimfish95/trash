#include <stdio.h>
int main()
{
    // 陣列有 10 個數字，一開始是由大到小
    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    for (int k=0; k<10; k++) printf("%d ", a[k]);
    printf("\n"); /// 這兩行，負責印出一開始陣列裡的數字

    // --- 交換排序法核心 ---
    for (int i=0; i<10; i++) {           /// 左邊 i (基準點)
        for (int j=i+1; j<10; j++) {     /// 右邊 j (從 i 的下一格開始往右掃描)
            if (a[i] > a[j]) {           /// 如果左邊的基準點比右邊大，大小不對，就交換
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    // ----------------------

    for (int k=0; k<10; k++) printf("%d ", a[k]);
    printf("\n"); /// 這兩行，負責印出排序後陣列裡的數字

    return 0;
}
