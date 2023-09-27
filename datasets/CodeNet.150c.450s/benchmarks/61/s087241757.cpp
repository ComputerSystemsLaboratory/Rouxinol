#include <algorithm>
#include <cctype>
#include <cstdio>
#include <iostream>
#include <locale>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int solve(int n, int a, int b, int c, int x) {
    // bool flag = true;
    int y[n];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }
    int index = 0;
    int count = 0;
    while (1) {
        if (y[index] == x) {
            index++;
        }
        if (index == n) {
            break;
        }

        ans++;
        count++;
        if (count > 10000) {
            ans = -1;
            break;
        }
        x = (a * x + b) % c;
    }
    return ans;
}

int main(int argc, char const *argv[]) {
    int n, a, b, c, x;
    vector<int> ans;
    while (1) {
        cin >> n >> a >> b >> c >> x;
        if (n == 0 && a == 0 && b == 0 && c == 0 && x == 0) break;
        ans.push_back(solve(n, a, b, c, x));
    }
    for (int a : ans) {
        cout << a << endl;
    }
    return 0;
}
/*
入力
solve呼びだし
入力
（A*X+B)modCを計算
指定された数字か判断
不可能判断？？？？
回答
*/
