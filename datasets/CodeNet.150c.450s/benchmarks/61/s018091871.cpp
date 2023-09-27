#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<iomanip>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int n, a, b, c, x;
    while(cin >> n >> a >> b >> c >> x, n||a||b||c||x){
        int F[10500] = {0};
        rep(i, n){
            cin >> F[i];
        }
        int loop, i = 0;
        for(loop = 0; loop <= 10000; loop++){
            if(F[i] == x){
                F[i] = 0;
                n--;
                i++;
            }
            x = (a * x + b) % c;
            if(!n) break;
        }
        if(loop <= 10000)
            cout << loop << endl;
        else
            cout << -1 << endl;
    }
}