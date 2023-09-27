#include <iostream>
using namespace std;

int main(){
    while(true){
        int n, a, b, c, x;
        int y[100];
        int cnt=-1, p=0;
        cin >> n >> a >> b >> c >> x;
        if(!(n||a||b||c||x)) break;
        for(int i=0;i<n;++i){
            cin >> y[i];
        }
        if(y[p] == x) ++p;
        if(p==n){
            cout << 0 << endl;
            continue;
        }
        for(int i=0;i<10000;++i){
            x = (a * x + b) % c;
            if(y[p] == x) ++p;
            if(p==n){
                cnt = i+1;
                break;
            }
        }
        cout << cnt << endl;
    }
}