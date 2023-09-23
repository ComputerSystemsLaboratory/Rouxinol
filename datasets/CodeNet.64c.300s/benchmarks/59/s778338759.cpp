#include <iostream>
#include <string>
#include <cassert>
#include <cctype>
#include <cstdio>

using namespace std;

bool IsPrime(int num) {
    if (num < 2)        return false;    // 2未満は素数
    if (num == 2)       return true;     // 2は素数
    if (num % 2 == 0)   return false;    // 2で割り切れれば素数ではない

    int i = 3;
    while (i * i <= num) {
        if (num % i == 0)
            return false;
        i += 2;
    }
    return true;
}


// 時間切れ
int main(void) {

    int N;
    cin >> N;

    int total = 0;
    for (int i = 0; i < N; ++i) {
        int e;
        cin >> e;
        if (IsPrime(e))
            ++total;
    }

    printf("%d\n", total);

    return 0;
}