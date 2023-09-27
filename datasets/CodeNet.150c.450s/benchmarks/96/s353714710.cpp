#include <iostream>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <string>

using namespace std;

char letter[] = {'.', ',', '!', '?', ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

char output(int b, int c)
{
    switch (b) {
    case 1:
        return letter[0 + (c % 5)];
        break;
    case 2:
        return letter[5 + (c % 3)];
        break;
    case 3:
        return letter[8 + (c % 3)];
        break;
    case 4:
        return letter[11 + (c % 3)];
        break;
    case 5:
        return letter[14 + (c % 3)];
        break;
    case 6:
        return letter[17 + (c % 3)];
        break;
    case 7:
        return letter[20 + (c % 4)];
        break;
    case 8:
        return letter[24 + (c % 3)];
        break;
    case 9:
        return letter[27 + (c % 4)];
        break;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int cnt = 0; cnt < n; cnt++) {
        string str;
        cin >> str;
        int button = -1;
        int count = -1;
        for (char c : str) {
            if (c == '0') {
                if (button != -1) {
                    cout << output(button, count);
                }
                count = -1;
                button = -1;
            } else {
                button = c - '0';
                count++;
            }
        }
        cout << endl;
    }
    return 0;
}