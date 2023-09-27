#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 10001;

vector<int> par(N);

int find(int a){
    if(par[a] == a)
        return a;
    else{
        par[a] = find(par[a]);
        return par[a];
    }
}

void merge(int a, int b){
    par[find(a)] = find(b);
}


int main(){
    
    int n, q;
    cin >> n >> q;
    
    for(int i = 0; i < n; i++)
        par[i] = i;
    
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