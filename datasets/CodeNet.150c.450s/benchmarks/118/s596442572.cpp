#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<map>
#include<algorithm>
#include<set>
#include <stdexcept>
#include<queue>
#define rep(i,N) for(int i=0;i<(N);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
const long long MOD = 1e9 + 7;
const long long INF = 1e12;
const int dx[]={1,0,-1,0,1,-1,-1,1};
const int dy[]={0,1,0,-1,1,1,-1,-1};
int ceil(int a,int b){
    return (a+b-1)/b;
}
int main(void){
    int n;  
    cin >> n;
    for ( int i=0; i<n; i++ ){
        int Y,M,D;  
        cin>>Y>>M>>D;
        int ans=0;
        while (Y<1000 ){
            D++;
            if (Y%3==0&&D>20||Y%3!=0 && M%2==0 && D>19 ||Y%3!=0 && M%2!=0 && D>20 ){
                D = 1;
                M++;
            }
            if(M>10){
                M =1;
                Y++;
            }
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
