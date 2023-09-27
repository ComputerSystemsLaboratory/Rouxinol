#include <iostream>
#include <vector>

using namespace std;

int minus_manzoku(int c[], int last[], int d)
{
    int sum = 0;
    int i;
    for (i = 0; i < 26; i++) {
        sum += c[i] * (d - last[i]);
    }
    return sum;
}

int main()
{
    int D;
    cin >> D;

    int c[26];
    int last[26];
    int i;
    for (i = 0; i < 26; i++) {
        cin >> c[i];
        last[i] = 0;
    }

    int s[D][26];
    int j;
    for (i = 0; i < D; i++) {
        for (j = 0; j < 26; j++) cin >> s[i][j];
    }

    int t[D];
    for (i = 0; i < D; i++) cin >> t[i];

    long score = 0;
    for (i = 0; i < D; i++) {
        last[t[i] - 1] = i + 1;
        score += s[i][t[i] - 1] - minus_manzoku(c, last, i + 1);
        cout << score << endl;
    }

    return 0;
}