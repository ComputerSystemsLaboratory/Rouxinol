#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0;
    string w, t;
    cin >> w;
    for(int i = 0; i < w.length(); i++) {
        if('A' <= w[i] && w[i] <= 'Z') {
            w[i] = w[i] + 'a' - 'A';
        }
    }
    
    while(1) {
        cin >> t;
        if(t == "END_OF_TEXT") break;
        if(w.length() != t.length()) continue;
        for(int i = 0; i < t.length(); i++) {
            if('A' <= t[i] && t[i] <= 'Z') {
                t[i] = t[i] + 'a' - 'A';
            }
        }
        string::size_type pos = t.find(w);
        while(pos != string::npos) {
            count++;
            pos = t.find(w, pos + w.length());
        }
    }

    cout << count << endl;
    return 0;
}

