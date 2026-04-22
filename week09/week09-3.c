int main()
{
    int a[10];

    // 1. 讀取 10 個數字進入陣列
    for (int i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }

    // here!!! You will learn today (氣泡排序核心)
    for (int k=0; k<10; k++) {          // 外層迴圈：控制要執行幾回合
        for (int i=0; i<10-1; i++) {    // 內層迴圈：負責相鄰兩個數字的比較
            if (a[i] < a[i+1]) {        // 如果「左邊比右邊小」


                int temp = a[i];        // 先把左邊的數字暫存到 temp
                a[i] = a[i+1];          // 把右邊的數字塞給左邊
                a[i+1] = temp;          // 把暫存的數字塞給右邊

            }
        }
    }
    // here!!! You will learn today

    // 3. 印出排序後的結果
    for (int i=0; i<10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
