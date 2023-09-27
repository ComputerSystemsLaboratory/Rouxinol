#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
#include<algorithm>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int m[20][20];

int main(){
    int x,y;
    while(cin >> x >> y, x||y){
        rep(k,20){
            rep(l,20){
                m[k][l] = 0;
            }
        }
        int n;
        cin >> n;
        rep(k,n){
            int a, b;
            cin >> a >> b;
            m[a][b] = 2 << 24;
        }
        m[1][1] = 1;
        int i, j;
        for(i = 1; i <= x; i++){
            for(j = 1; j <= y; j++){
                if(m[i][j] < 2 << 24){
                    m[i + 1][j]+= m[i][j];
                    m[i][j + 1]+= m[i][j];
                }
            }
        }
        cout << m[i-1][j-1] << endl;
    }
}