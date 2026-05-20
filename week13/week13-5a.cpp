#include <iostream>
using namespace std;


int max_digit(int n)
{
    // р程计讽ヘ玡箇砞程
    int ans = n % 10;

    // 秨﹍ノブ猭计浪琩
    while (n > 0) {
        // 狦瞷ㄓ硂计ゑиも ans 临
        if (n % 10 > ans) {
            ans = n % 10; // р ans 穝硂计
        }
        n = n / 10; // 奔程计膥尿浪琩
    }

 
    return ans;
}

int main() {
    int n;
    cin >> n; // 弄ㄏノ块计

    // ㊣ㄧΑノい珹腹癬ㄓ挡狦
    cout << "[" << max_digit(n) << "]";

    return 0;
}
