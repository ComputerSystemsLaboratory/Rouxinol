#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, j;
    string table[] = {".,!? ", "abc", "def", "ghi","jkl", "mno", "pqrs", "tuv", "wxyz"};

    cin >> n;

    while (n--) {
        string msg, ans, t;

        cin >> msg;

        ans = ""; j = 0; t = "";

        for (int i = 0; i < msg.size(); i++) {
            if (msg[i] == '0') {
                ans += t;
                j = 0; t = "";
            }
            else {
                t = table[msg[i]-'0'-1][j];
                j++;
                j %= table[msg[i]-'0'-1].size();
            }
        }
        cout << ans << endl;
    }
    return 0;
}
