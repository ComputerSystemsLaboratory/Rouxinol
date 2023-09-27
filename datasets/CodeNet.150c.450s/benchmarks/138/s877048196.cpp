#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int x, y;
    while(cin >> x >> y){
        if(x < y){
            int temp = x;
            x = y;
            y = temp;
        }
        while(y != 0){
            int a, b;
            a = y;
            b = x % y;
            x = a;
            y = b;
        }
        cout << x << endl;
    }
}