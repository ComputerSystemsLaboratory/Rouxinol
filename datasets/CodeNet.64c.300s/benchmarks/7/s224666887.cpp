#include <iostream>
using namespace std;

int findIndex(char c, int i) {
    if (c == 'S')
        return i - 1;
    if (c == 'H')
        return 13 + i - 1;
    if (c == 'C')
        return 2 * 13 + i - 1;
    if (c == 'D')
        return 3 * 13 + i - 1;

    return -1;
}

void print(int i) {
    if (i < 13) {
        cout << "S " << i + 1 << endl;
        return ;
    }
    if (i < 2 * 13) {
        cout << "H " << i % 13 + 1 << endl;
        return ;
    }
    if (i < 3 * 13) {
        cout << "C " << i % 13 + 1 << endl;
        return ;
    }
    if (i < 4 * 13) {
        cout << "D " << i % 13 + 1 << endl;
        return ;
    }
}

int main() {
    int n;
    cin >> n;

    char *sym = new char[n];
    int *ary = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> sym[i];
        cin >> ary[i];
    }

    int flag[52] = {0};
    for (int j = 0; j < n; ++j) {
        flag[findIndex(sym[j], ary[j])] = 1;
    }

    for (int k = 0; k < 52; ++k) {
        if (flag[k] == 0)
            print(k);
    }

    delete[] sym;
    delete[] ary;
    return 0;
}