#include <iostream>

using namespace std;

int P[10010];

int root(int a){
    if (P[a] == a) return a;
    return (P[a] = root(P[a]));
}

bool is_same_set(int a, int b){
    return root(a) == root(b);
}

void unite(int a, int b){
    P[root(a)] = root(b);
}

int main(){
    int N, Q;
    cin >> N >> Q;
    for (int i = 0; i < N; i++){
        P[i] = i;
    }
    for(int k = 0; k < Q; k++){
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0){
            unite(x, y);
        }else if(com == 1){
            if(is_same_set(x, y)) cout << "1" << endl;
            else cout << "0" << endl;
        }
    }
}