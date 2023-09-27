#include <iostream>
using namespace std;

struct Card { char mark; int number; };

int bubbleSort(Card c[], int n) {
    int cnt = 0;
    bool flag = true;
    while (flag) {
        flag = false;
        for (int i = n-1; i > 0; --i) {
            if (c[i].number < c[i-1].number) {
                swap(c[i], c[i-1]);
                cnt++;
                flag = true;
            }
        }
    }
    return cnt;
}

int selectionSort(Card c[], int n) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int minj = i;
        bool flag = false;
        for (int j = i; j < n; ++j) {
            if (c[j].number < c[minj].number) {
                minj = j;
                flag = true;
            }
        }
        swap(c[i], c[minj]);
        if (i != minj) cnt++;
    }
    return cnt;
}

void trace(Card c[], int n) {
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << c[i].mark << c[i].number;
    }
    cout << endl;
}

bool is_stable(Card b[], Card s[], int n) {
    for (int i = 0; i < n; ++i) {
        if (b[i].mark != s[i].mark || b[i].number != s[i].number) return false;
    }
    return true;
}

int main() {
    Card c[36], b[36], s[36];
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> c[i].mark >> c[i].number;
        b[i].mark = s[i].mark = c[i].mark;
        b[i].number = s[i].number = c[i].number;
    }
    bubbleSort(b, n);
    trace(b, n);
    cout << "Stable" << endl;
    selectionSort(s, n);
    trace(s, n);
    if (is_stable(b, s, n)) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
}