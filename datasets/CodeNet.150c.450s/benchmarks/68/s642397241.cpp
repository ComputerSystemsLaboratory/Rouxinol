#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<list>
#include<map>
#include<set>
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
#define INF INT_MAX

int a[2000];

int main(){
    while(1){
        int n;
        scanf("%d",&n);
        if(n == 0)
            break;
        REP(i,n)
            scanf("%d",&a[i]);
       
        int min = INF; 
        for(int i = 0;i < n;i++){
            for(int j = i + 1;j < n;j++){
                if(min > abs(a[i] - a[j]))
                    min = abs(a[i] - a[j]);
            }
        }
        printf("%d\n",min);
    }
    return 0;
}