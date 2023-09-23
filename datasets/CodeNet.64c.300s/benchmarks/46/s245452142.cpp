#include <iostream>
#include <vector>

using namespace std;

const int N = 1000000;

vector<bool> p;

void init(){
    p.assign(N, true); p[0] = p[1] = false;
    for(int i=2; i<N; ++i)if(p[i]){
        for(int j=i<<1; j<N; j+=i)p[j] = false;
    }
}

int main(){
    init();
    int a, d, n;
    while(cin >> a >> d >> n, a|d|n){
        int x = a;
        for(; x<N; x+=d){
            if(p[x])n--;
            if(n == 0)break;
        }
        cout << x << '\n';
    }
    return 0;
}