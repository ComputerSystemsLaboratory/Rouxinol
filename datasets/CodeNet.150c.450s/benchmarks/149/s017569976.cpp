#include <bits/stdc++.h>
using namespace std;

int parent[10005];

int getp(int x)
{
    if(parent[x] == x) return (x);
    return (parent[x] = getp(parent[x]));
}

int main()
{
    int N, Q, A, B, C;
    cin >> N >> Q;
    for(int i = 0; i < N; i++) parent[i] = i;
    while(Q--) {
        cin >> A >> B >> C;
        if(A == 0) parent[getp(B)] = getp(C);
        else if(getp(B) == getp(C)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return (0);
}