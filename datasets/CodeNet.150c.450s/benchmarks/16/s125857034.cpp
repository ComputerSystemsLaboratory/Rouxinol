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

char s[300000];
stack<ll> st,st2,L2;
queue<ll> L;

int main(void){
    ll a,l,max,maxi,level;

    scanf("%s",s);

    int len = strlen(s);
    max = 0;level = 0;maxi = 0;
    REP(i,len){
        if(s[i] == '/')
            level++;
        else if(s[i] == '\\')
            level--;
        if(max < level){
            max = level;maxi = i;
        }    
    }
    a = 0;l = 0;
    REP(i,maxi + 1){
        if(s[i] == '\\')
            st.push(i);
        else if(s[i] == '/' && st.empty() == false){
            ll b = i - st.top();
            st.pop();
            a += b;l += b;
        }

        if(st.empty() == true && l > 0){
            L.push(l); l = 0;
        }
    }
    l = 0;
    RFOR(i,maxi,len){
        if(s[i] == '/')
            st2.push(i);
        else if(s[i] == '\\' && st2.empty() == false){
            ll b = st2.top() - i;
            st2.pop();
            a += b;l += b;
        }
        if(st2.empty() == true && l > 0){
            L2.push(l);l = 0;
        }
    }

    while(L2.empty() == false){
        L.push(L2.top());L2.pop();
    }


    printf("%lld\n%lld",a,L.size());
    if(L.size() > 0)
        printf(" ");
    while(L.empty() == false){
        printf("%lld",L.front());
        L.pop();
        if(L.empty() == true)
            break;
        else
            printf(" ");
    }
    printf("\n");
    return 0;
} 