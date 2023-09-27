#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;
const int inf = 1e9;
const long long INF = 1LL << 60;   // INFの値は1152921504606846976

int main()
{
    int n;
    cin >> n;
    cout << n << ':';
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            cout << ' ' << i;
            n /= i;
        }
    }
    if(n != 1){
        cout << ' ' << n;
    }
    cout << endl;
}
