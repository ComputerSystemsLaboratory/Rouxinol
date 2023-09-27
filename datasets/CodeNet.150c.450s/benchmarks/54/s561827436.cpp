#include <iostream>
#include <string>
using namespace std;

int main()
{
    string w, t;
    cin >> w;
    for (int i = 0; i < w.length(); i++)
        if (w[i] >= 'A' && w[i] <= 'Z') w[i] += ' ';

    int cnt = 0;
    while (1) {
        cin >> t;
        if (t == "END_OF_TEXT") break;
        for (int i = 0; i < t.length(); i++)
            if (t[i] >= 'A' && t[i] <= 'Z') t[i] += ' ';
        if (t == w) cnt++;
    }

    cout << cnt << endl;

    return 0;
}