#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define llong long long
using namespace std;

void call(int n){
    int i = 1;
    while (true) {
        int x = i;
        if ( x % 3 == 0 ){
            cout << " " << i;
            if ( ++i <= n ) continue;
            else break;
        }

        bool flag = false;
        while (true){
            if ( x % 10 == 3 ){
                cout << " " << i;
                if ( ++i <= n ) flag = true;
                else break;
            }
            if (flag) break;
            x /= 10;
            if ( x ) continue;
            break;
        }
        if (flag) continue;
        if ( ++i <= n ) continue;

        break;
    }
        cout << endl;
}

int main()
{
    int n;
    cin >> n;
    call(n);

    return 0;
}