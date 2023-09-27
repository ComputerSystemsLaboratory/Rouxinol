#include<iostream>
using namespace std;

int main(){
    int n, a, b, c, x, y;
    while(cin >> n >> a >> b >> c >> x, n+a+b+c+x){
        int y[n];
        for(int i = 0; i < n; i++)  cin >> y[i];

        int step = 0, pos = 0;
        while(1){
            if(x == y[pos]) pos++;
            if(pos == n)    break;
            x = (a*x + b) % c;
            step++;
            if(step == 10001)   break;
        }

        if(pos == n && step <= 10000)    cout << step << endl;
        else                             cout << -1 << endl;
    }
    return 0;
}
