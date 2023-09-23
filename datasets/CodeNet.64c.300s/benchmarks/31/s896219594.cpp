#include <bits/stdc++.h>
using namespace std;
static const int INF = 2000000000;
static const int NIL = -1;
typedef long long ll;

int main(){
    bool s[31];
    int tmp;
    memset(s,false,sizeof(s));
    for(int i=1;i<=28;i++){
        scanf("%d",&tmp);
        s[tmp] = true;
    }
    for(int i=1;i<=30;i++){
        if(!s[i]) printf("%d\n",i);
    }
}