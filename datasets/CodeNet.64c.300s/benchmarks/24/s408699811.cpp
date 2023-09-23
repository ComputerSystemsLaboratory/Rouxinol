#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int n, a, b;
    while(cin >> n, n){
        int as = 0, bs = 0;
        rep(i,n){
            cin >> a >> b;
            if(a > b){
                as += (a + b);
            }else if(a < b)
                bs += (a + b);
            else{
                as += a;
                bs += b;
            }
        }
        cout << as << ' ' << bs << endl;
    }
}