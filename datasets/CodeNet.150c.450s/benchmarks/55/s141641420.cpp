#include <iostream>
#define MAX_LEN 1001
using namespace std;

// in ASCII, num begin in 48

int main() {
//    freopen("in.txt", "r", stdin);

    char num[MAX_LEN], tmp;
    int pos, sum, value;
    bool flag;

    while (1) {

        for (int i = 0; i < MAX_LEN; ++i) {
            num[i] = '0';
        }

        pos = 0;
        while ((tmp = getchar()) != '\n' && tmp != -1) {
            num[pos++] = tmp;
        }

        flag = true;
        for (int i = 0; i < MAX_LEN; ++i) {
            if (num[i] != '0') {
                flag = false;
            }
        }
        if (flag) {
            return 0;
        }

        sum = 0;
        for (int i = 0; i < MAX_LEN; ++i) {
            sum += (int) num[i] - 48;
        }
        cout << sum << endl;
    }
}