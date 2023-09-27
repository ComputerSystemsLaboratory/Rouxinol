#include<iostream>
using namespace std;

int P[10010];

void init (int N){
    for (int i = 0; i < N; i++) P[i] = i;
}

int root (int a){
    if (P[a] == a) return a;
    return (P[a] = root(P[a]));
}

bool is_same_set(int a, int b){
    return root(a) == root(b);
}

void unite (int a, int b){
    P[root(a)] = root(b);
}

int main(){
    int n,q,x,y,com;
    cin >> n >> q;
    init(n);
    for (int i = 0; i < q; i++){
        cin >> com >> x >> y;
        if (com == 0) unite (x,y);
        if (com == 1){
            if (is_same_set(x,y)) cout << "1" << endl;
            else cout << "0" << endl;
        }
    }
}