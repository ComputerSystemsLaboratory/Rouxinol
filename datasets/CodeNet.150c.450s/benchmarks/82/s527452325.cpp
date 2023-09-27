#include <bits/stdc++.h>
using namespace std;

int main(){
    int num[7], p, a, b;
    for (int i=1; i<7; i++) cin >> num[i];
    cin >> p;
    for (int i=0; i<p; i++){
        cin >> a >> b;
        // num[1]
        if (num[2]==a&&num[3]==b || num[3]==a&&num[5]==b ||\
        num[5]==a&&num[4]==b || num[4]==a&&num[2]==b)
            cout << num[1] << endl;
        // num[2]
        if (num[4]==a&&num[6]==b || num[6]==a&&num[3]==b ||\
        num[3]==a&&num[1]==b || num[1]==a&&num[4]==b)
            cout << num[2] << endl;
        // num[3]
        if (num[1]==a&&num[2]==b || num[2]==a&&num[6]==b ||\
        num[6]==a&&num[5]==b || num[5]==a&&num[1]==b)
            cout << num[3] << endl;
        // num[4]
        if (num[2]==a&&num[1]==b || num[1]==a&&num[5]==b ||\
        num[5]==a&&num[6]==b || num[6]==a&&num[2]==b)
            cout << num[4] << endl;
        // num[5]
        if (num[1]==a&&num[3]==b || num[3]==a&&num[6]==b ||\
        num[6]==a&&num[4]==b || num[4]==a&&num[1]==b)
            cout << num[5] << endl;
        // num[6]
        if (num[2]==a&&num[4]==b || num[4]==a&&num[5]==b ||\
        num[5]==a&&num[3]==b || num[3]==a&&num[2]==b)
            cout << num[6] << endl;
    }
    return 0;
}
