#include <iostream>
#include <string>

using namespace std;

void print(string s, int a, int b) {
    for(int i = a; i <= b; i++) {
        cout << s[i];
    }
    cout << endl;
}

string reverse(string s, int a, int b) {
    for(int i = 0; i < (b - a + 1) / 2; i++){
        char tmp = s[a + i];
        s[a + i] = s[b - i];
        s[b - i] = tmp;
    }
    return s;
}

string replace(string s, int a, int b, string p) {
    for (int i = 0; i < p.length(); i++) {
        s[a + i] = p[i];
    }
    return s;
}

int main() {
    string s, query;
    cin >> s;
    int a, b, q;
    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> query;
        if(query == "print") {
            cin >> a >> b;
            print(s, a, b);
        } else if (query == "reverse") {
            cin >> a >> b;
            s = reverse(s, a, b);
        } else if (query == "replace") {
            string p;
            cin >> a >> b >> p;
            s = replace(s, a, b, p);
        }
    }
    
    return 0;
}
