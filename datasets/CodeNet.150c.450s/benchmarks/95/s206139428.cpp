#include <iostream>
using namespace std;

int main(void) {
    int n;
    string s;
    while (cin >> n, n) {
        int l=0, r=0, state=0;
        int score=0;
        for(int i=0; i<n; i++) {
            cin >> s;
            //cout << "[" << s << "]";
            if (s[0] == 'l') { l = (s[1] == 'u' ? 1 : 0); }
            if (s[0] == 'r') { r = (s[1] == 'u' ? 1 : 0); }
            //cout << "{" << l << r << "}";
            if (l==1 && r==1) { if(state==0){ score++; } state = 1; }
            if (l==0 && r==0) { if(state==1){ score++; } state = 0; }
        }
        cout << score;
        cout << endl;
    }
    return 0;
}