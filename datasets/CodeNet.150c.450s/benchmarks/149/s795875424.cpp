#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 10001;

vector<int> par(N);
vector<int> ran(N);

int find(int a){
    if(par[a] == a)
        return a;
    else{
        par[a] = find(par[a]);
        return par[a];
    }
}

void merge(int a, int b){
    if(ran[find(a)] < ran[find(b)]){
        par[find(a)] = find(b);
    }
    else if(ran[find(b)] < ran[find(a)]){
        par[find(b)] = find(a);
    }
    else{
        par[find(b)] = find(a);
        ran[find(a)] += 1;
    }
}


int main(){
    
    int n, q;
    cin >> n >> q;
    
    for(int i = 0; i < n; i++){
        par[i] = i;
        ran[i] = 0;
    }
    
    for(int i = 0; i < q; i++){
        int c, x, y;
        cin >> c >> x >> y;
        if(c == 0){
            merge(x, y);
        }
        else{
            if(find(x) == find(y))
                cout << 1 <<endl;
            else
                cout << 0 <<endl;
        }
    }
    
}