// week13-4b.cpp SOIT107_ADVANCE_008_C_C++
#include <iostream>
using namespace std;


int prime(int n)
{
    // 從 2 開始除，一路除到 n-1
    for (int i=2; i<n; i++) {
        // 如果中途被任何一個數字整除了...
        if (n % i == 0) {
            return 0; // failed! 直接宣告失敗，回傳 0，並「立刻結束」這個函式
        }
    }
    // 如果經歷了上面的層層考驗都沒有 return 0，就會順利走到這裡
    return 1; // success
}

int main()
{
    int n;
    cin >> n; //


    cout << "[" << prime(n) << "]";

    return 0;
}
