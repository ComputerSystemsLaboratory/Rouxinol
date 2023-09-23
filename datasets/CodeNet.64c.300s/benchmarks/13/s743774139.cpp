#include<cstdio>
#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
#include<queue>
#include<functional>
#include<map>
#include<set>
#include<cstring>
#include<string>
#include<stack>
#include<math.h>
#include<stdlib.h>
using namespace std;
//#define int long long
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<int, char> pic;
typedef priority_queue<pii, vector<pii>, greater<pii> > RPQ;
#define mk make_pair
#define INF (1 << 30)
#define INFL (1ll << 60ll)
#define mod 1000000007

int N, fib[50];

signed main(){
    fib[0] = 1;
    fib[1] = 1;
    for(int i = 2; i < 45; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cin >> N;
    cout << fib[N] << endl;


    return 0;
}

/*

*/
