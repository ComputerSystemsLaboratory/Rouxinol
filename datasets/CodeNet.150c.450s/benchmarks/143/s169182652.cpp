#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<vector>
#include<utility>
#include<queue>
#include<deque>
#include<stack>
#include<set>
#include<map>
#include<bitset>
#include<string>
#define MOD 1000000007
#define enld endl
typedef long long ll;
using namespace std;

template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}

int main(){
    cin.tie(0);ios::sync_with_stdio(false);
    ll N; cin >> N;
    ll A[100100],B[100100],C[100100];
    ll cnt[100100];
    Fill(cnt, 0);
    ll S = 0;
    for(int i=0;i<N;i++){
        cin >> A[i];
        S += A[i];
        cnt[A[i]]++;
    }
    ll Q; cin >> Q;
    for(int i=0;i<Q;i++){
        cin >> B[i] >> C[i];
    }
    for(int i=0;i<Q;i++){
        S += cnt[B[i]] * (C[i] - B[i]);
        cnt[C[i]] += cnt[B[i]];
        cnt[B[i]] = 0;
        cout << S << "\n";
    }
    return 0;
}