#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define pb push_back
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};
 
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

int main(){
    int m[] = {500,100,50,10,5,1};
    while(1){
    int n;
    scanf("%d",&n);
    if(n == 0)
        break;
    n = 1000 - n;
    
    int c = 0;int i = 0;
    while(n > 0){
        if(n < m[i]){
            i++;
        }else{
            n -= m[i];
            c++;
        }
    }
    printf("%d\n",c);
    }
    return 0;
}