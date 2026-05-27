//week14-3a
#include <stdio.h>

int main()
{
    char s[20]; // 宣告一個可以裝 20 個字元的字串陣列
    scanf("%s", s); // 讀取使用者輸入的字串 (遇到空白會停止)


    for (int i=0; s[i] != 0; i++) {


        if (s[i] >= 'A' && s[i] <= 'Z') {
            // 轉換成小寫
            s[i] = s[i] - 'A' + 'a';
        }

        else if (s[i] >= 'a' && s[i] <= 'z') {
            // 轉換成大寫
            s[i] = s[i] - 'a' + 'A';
        }
    }


    printf("%s\n", s);

    return 0;
}
