#include<iostream>

using namespace std;

int main () {

    char s[200];
    char p[100];

    bool answer = false;

    cin >> s;
    cin >> p;

    // cout << "Complete Cin" << endl;

    // 文字列を文字列終了直後にコピーする。
    for (int i = 0; ; i++) {

        // cout << "Now Loading1" << endl;

        bool flag = false;
        
        if(s[i] == 0) {

            int x = i;
            
            for(int j = x; j < x * 2; j++) {
                s[j] = s[j - x];
            }

            s[x * 2] = 0;

            flag = true;

        }

        if (flag == true) {
            break;
        }
    }

    for (int i = 0; ; i++) {

        // cout << "Now Loading2" << endl;

        if (s[i] == 0) {
            break;
        }

        if (p[0] == s[i]) {
            
            // cout << "Now Loading3" << endl;

            int x = i;
            int j = 0;

            while (1) {
                if (p[j] == 0 && p[j - 1] == s[x - 1]) {
                    answer = true;
                    break;
                }
                if (p[j] != s[x]) {
                    break;
                }

                j++;
                x++;
            }

        }
    }

    if (answer) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
