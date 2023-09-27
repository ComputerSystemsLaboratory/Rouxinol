#include <iostream>
#include <cstdio>
#include <cmath>

#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define N 10000


using namespace std;

int main(void){
    int a,b;
    int n;
    
    while (cin>>n && n){
        int s = 0 , t = 0;
        REP(i,n){
            cin >> a >> b;
            if (a>b)
                s += (a+b);
            else if (a<b)
                t += (a+b);
            else{
                s += a;
                t += b;
            }
        }
        cout << s << " " << t << endl;
    }
    
    return 0;
}