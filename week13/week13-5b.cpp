#include<iostream>
using namespace std;

// 填補缺失的 max 函式 (打擂台法)
int max(int a, int b, int c, int d) {
    if (b > a) a = b;
    if (c > a) a = c;
    if (d > a) a = d;
    return a;
}

// 填補缺失的 min 函式 (打擂台法)
int min(int a, int b, int c, int d) {
    if (b < a) a = b;
    if (c < a) a = c;
    if (d < a) a = d;
    return a;
}

int main(){
    int a, b, c, d;
    // 一口氣讀取四個數字
    cin >> a >> b >> c >> d;

    // 直接呼叫函式並印出相減的結果
    cout << (max(a, b, c, d) - min(a, b, c, d));

    return 0;
}
