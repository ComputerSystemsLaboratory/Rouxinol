#include<bits/stdc++.h>
using namespace std;

int next(int a, int b, int c, int x){
    return (a*x+b)%c;
}

int main(void){
    while(true){
         int n, a, b, c, x, ri[110];
        cin >> n >> a >> b >> c >> x;
        if((n+a+b+c+x)==0) break;
        for(int i=0;i<n;++i){
            cin >> ri[i];
        }
        int frame = 0, now=0;
        while(frame<=10000){
            if(ri[now]==x) ++now;
            if(now==n) break;
            x = next(a, b, c, x);
            ++frame;
        }
        if(frame<=10000) cout << frame << endl;
        else cout << "-1" << endl;
    }
}
