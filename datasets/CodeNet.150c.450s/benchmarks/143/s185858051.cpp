#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<long> A(N);
    long sum=0;
    for (int i = 0; i < N; i++){
       cin >> A[i];
       sum+=A[i];
    }
    int Q;
    cin >> Q;
    map<long, long> Map;
    for (int i = 0; i < N; i++){
        Map[A[i]]++;
    }
    for (int i = 0; i < Q; i++){
        long B,C;
        cin >> B >> C;
        sum+=Map[B]*C;
        sum-=Map[B]*B;
        Map[C]+=Map[B];
        Map[B]=0;
        cout << sum << endl;
    }
}