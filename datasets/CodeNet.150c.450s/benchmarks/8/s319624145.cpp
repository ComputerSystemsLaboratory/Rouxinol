#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0;
    string tarou, hanako;
    for(int i = 0; i < n; i++) {
        cin >> tarou >> hanako;
        if(tarou > hanako) cnt1 += 3;
        else if(tarou < hanako) cnt2 += 3;
        else {cnt1++; cnt2++;}
    }
    cout << cnt1 << ' ' << cnt2 << endl;
    return 0;
}
