#include <iostream>
using namespace std;
bool eqigc(string T, string W) {
    bool ret = true;
    if (T.size() == W.size()) {
        int i;
        for (i=0;i<T.size();i++) {
            if ('A' <= T[i] && T[i] <= 'Z') T[i]-='A'-'a';
            if ('A' <= W[i] && W[i] <= 'Z') W[i]-='A'-'a';
            if (T[i] != W[i]) {
                ret = false;
                break;
            }
        }
    } else {
        ret = false;
    }
    return ret;
}
int main() {
    string W,T;
    int ans=0;
    cin >> W;
    while (cin >> T) {
        if (T == "END_OF_TEXT") break;
        else if (eqigc(T,W)) ans++;
    }
    cout << ans << endl;
    return 0;
}