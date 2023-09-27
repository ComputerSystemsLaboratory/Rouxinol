#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

#define MAXN 1500
#define MAXKIND 1000*MAXN
int h[MAXKIND], w[MAXKIND];

int main(int argc, const char * argv[]) {
    while(1){
        int n, m; cin >> n >> m;
        if(!n && !m) break;
        
        int hh[MAXN] = {0}, ww[MAXN] = {0};
        memset(h, 0, sizeof(h));
        for(int i = 0; i < n; i++){
            cin >> hh[i]; h[hh[i]]++;
        }
        for(int i = 0; i < n; i++){
            int height = hh[i];
            for(int j = i+1; j < n; j++){
                height += hh[j];
                h[height]++;
            }
        }
        
        memset(w, 0, sizeof(w));
        for(int i = 0; i < m; i++){
            cin >> ww[i]; w[ww[i]]++;
        }
        for(int i = 0; i < m; i++){
            int width = ww[i];
            for(int j = i+1; j < m; j++){
                width += ww[j];
                w[width]++;
            }
        }
        
        int cnt = 0;
        for(long i = 0; i < MAXKIND; i++){
            cnt += h[i] * w[i];
        }
        cout << cnt << endl;
    }
}