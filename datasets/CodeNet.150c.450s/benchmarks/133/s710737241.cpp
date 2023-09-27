#include <iostream>
using namespace std;
int main() {
    int d;
    cin >> d;
    int c[26], s[d][26], t[d], last[26], satisfaction = 0;
    for (int i=0; i<26; i++) {
        cin >> c[i];
        last[i] = -1;
    }
    for (int i=0; i<d; i++) {
        for (int j=0; j<26; j++) {
            cin >> s[i][j];
        }
    }
    for (int i=0; i<d; i++) {
        cin >> t[i];
    }
    for (int i=0; i<d; i++) {
        satisfaction += s[i][t[i]-1] + c[t[i]-1] * (i-last[t[i]-1]);
        for (int j=0; j<26; j++) {
            satisfaction -= c[j] * (i-last[j]);
        }
        last[t[i]-1] = i;
        cout << satisfaction << endl;
    }
}