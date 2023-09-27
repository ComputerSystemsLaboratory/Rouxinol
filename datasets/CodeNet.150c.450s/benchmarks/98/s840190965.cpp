#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    int a[100], b[100];
    while(true){
        scanf("%d%d", &n, &m);
        if(n == 0 && m == 0) break;
        int sa = 0, sb = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", a + i);
            sa += a[i];
        }
        for(int i = 0; i < m; i++){
            scanf("%d", b + i);
            sb += b[i];
        }
        bool found = false;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(2 * (a[i] - b[j]) == sa - sb){
                    printf("%d %d\n", a[i], b[j]);
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
        if(!found){
            puts("-1");
        }
    }
    return 0;
}