#include <iostream>
using namespace std;

int hoge(int b, int n, int s) {
    if (n == 1)
        return (0 <= s && s <= 9 && b <= s)? 1 : 0;
    int sum = 0;
    for (int i = b; i <= 9; ++i)
        sum += hoge(i+1, n-1, s-i);
    return sum;
}

int main(void) {
    int n, s;
    while (cin >> n >> s && (n!=0 || s!=0)) {
        cout << hoge(0, n, s) << endl;
    }
    return 0;
}

