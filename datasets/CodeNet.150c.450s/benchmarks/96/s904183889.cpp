#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string map[10] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno",
        "pqrs", "tuv", "wxyz"};
    string line;
    int n, cnt, num;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> line;
        cnt = 0;
        for (int j = 0; j < line.length(); ++j) {
            if (line[j] == '0') {
                if (j == 0 || line[j - 1] == '0')
                    continue;
                num = line[j - 1] - '0';
                cout << map[num][(cnt - 1) % map[num].length()];
                cnt = 0;
            } else if (line[j] != '0') {
                cnt++;
            }
        }
        cout << endl;
    }
    return 0;
}