// Prime Factorize
// 所要時間 分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()

int main() {

    int n;
    cin >> n;


    cout << to_string(n) << ": ";

    int a = n;
    for(int i=2; i*i<=a; ++i){
        while(n % i == 0){
            cout << i;
            if((double)n / i != 1){
                cout << " ";
            }
            else{
                cout << endl;
            }
            n /= i;
        }
    }
    if(n != 1){
        cout << n << endl;
    }

    return 0;
}
