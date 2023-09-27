#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    int cnt = 0;
    string w, t;
    cin >> w;
    transform(w.begin(), w.end(), w.begin(), ::tolower);
    while(cin >> t && t != "END_OF_TEXT") {
        transform(t.begin(), t.end(), t.begin(), ::tolower);
        if (t == w)
            ++cnt;
    }
    cout << cnt << endl;
    return 0;
}
