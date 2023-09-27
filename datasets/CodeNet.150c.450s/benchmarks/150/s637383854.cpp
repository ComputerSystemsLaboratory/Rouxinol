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
#include<malloc.h>
#include<math.h>
using namespace std;
#define int long long
typedef pair<int, int> pii;
typedef priority_queue<pii, vector<pii>, greater<pii> > RPQ;
#define mk make_pair
#define INF (1 << 30)
#define INFL (1ll << 60ll)
#define mod 1000000007

int N, a[2000200], b[2000200], c[10100];

void countingsort(int k){
    for(int i = 0; i < N; i++){
        c[a[i]]++;
    }
    for(int i = 1; i <= k; i++){
        c[i] += c[i - 1];
    }
    for(int i = N - 1; i >= 0; i--){
        b[c[a[i]]] = a[i];
        c[a[i]]--;
    }
}

signed main(){
    cin >> N;
    int k = 0;
    for(int i = 0; i < N; i++){
        cin >> a[i];
        k = max(k, a[i]);
    }
    countingsort(k);
    for(int i = 0; i < N; i++){
        cout << b[i + 1] << ((i == N - 1) ? "\n" : " ");
    }

    return 0;
}

/*

*/
