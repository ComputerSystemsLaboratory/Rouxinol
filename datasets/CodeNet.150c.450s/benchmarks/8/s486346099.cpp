#include <iostream>
#include <string>
using namespace std;

int main() {
    int i, n, cnt1 = 0, cnt2 = 0;
    string str1, str2;

    cin >> n;
    for(i=0; i<n; ++i) {
        cin >> str1 >> str2;
        if(str1.compare(str2) > 0) cnt1 += 3;
        else if(str1.compare(str2) < 0) cnt2 += 3;
        else {
            ++cnt1;
            ++cnt2;
        }
    }
    cout << cnt1 << ' ' << cnt2 << endl;

    return 0;
}