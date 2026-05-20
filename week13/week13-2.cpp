#include <stdio.h>

int a = 100, b = 200; /// global 全域變數 (公共大廳)

void fun1()
{
    int b = 80; /// local 區域變數 (fun1 的專屬房間)
    printf("void fun1() a is: %d\n", a);
    printf("void fun1() b is: %d\n", b);
}

void fun2()
{
    b = 30; /// 修改 global 全域變數
}

int main()
{
    int a = 50; /// local 區域變數 (main 的專屬房間)

    // 第一階段印出
    printf("int main() a is: %d\n", a);
    printf("int main() b is: %d\n", b);

    fun1(); // 呼叫 fun1
    fun2(); // 呼叫 fun2

    // 第二階段印出
    printf("int main() a is: %d\n", a);
    printf("int main() b is: %d\n", b);

    return 0;
}
