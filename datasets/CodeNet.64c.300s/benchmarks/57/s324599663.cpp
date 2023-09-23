#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <algorithm>

#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define ll long long int

using namespace std;

bool a[10][10000] , b[10][10000];

int main(void) {
    int c,r;
    while (cin>>r>>c && r>0){
        REP(i,r){
            REP(j,c){
                cin >> a[i][j];
            }
        }
        int ans = 0;
        REP(d,1<<r){
            int e=d;
            REP(i,r){
                if (e%2==0){
                    REP(j,c) b[i][j] = a[i][j];
                }else{
                    REP(j,c) b[i][j] = a[i][j]^1;
                }
                e/=2;
            }
            int s=0;
            REP(j,c){
                int omote=0,ura=0;
                REP(i,r){
                    if(b[i][j]) omote++;
                    else ura++;
                }
                s+=max(omote,ura);
            }
            ans=max(ans,s);
        }
        cout << ans << endl;
        
        
    }
    return 0;
}