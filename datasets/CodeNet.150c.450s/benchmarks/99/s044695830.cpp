#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    int num1 = 0, num2 = 0;
    int mul_num = 1, base_num = 1;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] - '0' >= 2 && s1[i] - '0' <= 9) {
            mul_num = s1[i] - '0';
        }
        else {
            if (s1[i] == 'm') base_num = 1000;
            else if (s1[i] == 'c') base_num = 100;
            else if (s1[i] == 'x') base_num = 10;
            else base_num = 1;
            num1 += mul_num * base_num;
            mul_num = 1;
        }
    }
    for (int i = 0; i < s2.length(); i++) {
        if (s2[i] - '0' >= 2 && s2[i] - '0' <= 9) {
            mul_num = s2[i] - '0';
        }
        else {
            if (s2[i] == 'm') base_num = 1000;
            else if (s2[i] == 'c') base_num = 100;
            else if (s2[i] == 'x') base_num = 10;
            else base_num = 1;
            num2 += mul_num * base_num;
            mul_num = 1;
        }
    }
    int ans_num = num1 + num2;
    string ans;
    int base = 1;
    while (ans_num > 0) {
        if (ans_num % 10 > 0) {
            if (base == 1) ans += 'i';
            else if (base == 2) ans += 'x';
            else if (base == 3) ans += 'c';
            else ans += 'm';
            if (ans_num % 10 > 1) {
                ans += (char)('0' + ans_num % 10);
            }
        }
        base++;
        ans_num /= 10;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        solve();
    }
    return 0;
}
