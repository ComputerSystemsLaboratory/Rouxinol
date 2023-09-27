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

list<ll> l;

int main(void){
    ll n,x;
    char cmd[20];
    scanf("%lld",&n);

    REP(aaa,n){
        scanf("%s",cmd);
        if(cmd[0] == 'i'){
            scanf("%lld",&x);
            l.push_front(x);
        }else if(cmd[6] == '\0'){
            scanf("%lld",&x);
            list<ll>::iterator it = l.begin();
            while(it != l.end()){
                if(*it == x){
                    l.erase(it);
                    break;
                }
                it++;
            }
        }else if(cmd[6] == 'F')
            l.pop_front();
        else
            l.pop_back();
    }
    list<ll>::iterator it = l.begin();
    while(it != l.end()){
        printf("%lld",*it);
        it++;
        if(it != l.end())
            printf(" ");
    }
    printf("\n");
    return 0;
} 