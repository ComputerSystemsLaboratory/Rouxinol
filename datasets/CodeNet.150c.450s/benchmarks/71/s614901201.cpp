#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
typedef long long LL;
int main(){
        int a;
        while(cin>>a){
           LL c=0;
           REP(i,10){
               REP(j,10){
                   REP(k,10){
                       REP(l,10){
                           if(i+j+k+l==a)c++;
                       }
                   }
               }
           }
           cout<<c<<endl;
        }
	return(0);
}