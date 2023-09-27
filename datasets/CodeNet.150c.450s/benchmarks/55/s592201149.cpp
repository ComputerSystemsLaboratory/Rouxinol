#include <iostream>
using namespace std;
int main() {
    string x;
    int ans,i;
    while (cin>>x && x != "0") {
        ans = 0;
        for (i=0;i<x.size();i++) {
            ans += x[i] - '0';
        }
        cout << ans << endl;
    }
    return 0;
}