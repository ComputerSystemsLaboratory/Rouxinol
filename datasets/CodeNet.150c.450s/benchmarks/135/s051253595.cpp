#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

#define MAXN 1500
#define MAXKIND 1000*MAXN
int h[MAXKIND], w[MAXKIND];

void calLength(int n,int length[MAXKIND]){
    int l[MAXN] = {0};
    for(int i = 0; i < n; i++){
        cin >> l[i]; length[l[i]]++;
    }
    
    for(int i = 0; i < n; i++){
        int nowLength = l[i];
        for(int j = i+1; j < n; j++){
            nowLength += l[j];
            length[nowLength]++;
        }
    }
}

int main(int argc, const char * argv[]) {
    while(1){
        int n, m; cin >> n >> m;
        if(!n && !m) break;
        
        memset(h, 0, sizeof(h));
        memset(w, 0, sizeof(w));
        
        calLength(n, h);
        calLength(m, w);
        
        int cnt = 0;
        for(long i = 0; i < MAXKIND; i++){
            cnt += h[i] * w[i];
        }
        cout << cnt << endl;
    }
}