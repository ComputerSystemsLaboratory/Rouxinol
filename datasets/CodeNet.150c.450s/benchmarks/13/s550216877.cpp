#include <iostream>
#include <string>
using namespace std;

int main() {
    int i, j, cnt;
    string s, p;

    cin >> s >> p;
    for(i=0; i<s.length(); ++i) {
        cnt = 0;
        for(j=0; j<p.length(); ++j) {
            if(s[(i+j)%s.length()] == p[j]) ++cnt;
        }
        if(cnt == p.length()) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}