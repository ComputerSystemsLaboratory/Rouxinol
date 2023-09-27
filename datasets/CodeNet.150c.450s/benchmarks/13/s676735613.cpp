#include <iostream>
using namespace std;

int main() {
//    freopen("in.txt", "r", stdin);

    int slen = 0, tlen = 0, pos = 0;
    char src[102] = {0}, tar[102] = {0}, tmp;

    while ((tmp = getchar()) != '\n') {
        src[pos++] = tmp;
    }
    slen = pos;

    pos = 0;
    while ((tmp = getchar()) != '\n' && tmp != EOF) {
        tar[pos++] = tmp;
    }
    tlen = pos;

    for (int i = 0; i < slen; ++i) {
        for (int j = 0; j < tlen; ++j) {
            pos = (i + j >= slen) ? (i + j - slen) : (i + j);
            if (tar[j] != src[pos]) {
                break;
            }
            if (j == tlen - 1) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}