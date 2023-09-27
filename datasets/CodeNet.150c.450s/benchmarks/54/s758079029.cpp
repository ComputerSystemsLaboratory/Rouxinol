#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string w, t;
    int a = 0;
    cin >> w;
    while (cin >> t) {
        if (t == "END_OF_TEXT") break;
        for (int i = 0; i < t.size(); i++) {
            if (isupper(t[i])) t[i] = tolower(t[i]);
        }
        if (t == w) a++;
    }
    cout << a << endl;
}
