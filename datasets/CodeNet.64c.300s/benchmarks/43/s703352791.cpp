#include <bits/stdc++.h>
using namespace std;
static const int INF = 2000000000;
static const int NIL = -1;
typedef long long ll;

int main(){
    int a,b,c,d,s,e,f,g,h,t;
    scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
    s = a + b + c + d;
    t = e + f + g + h;
    printf("%d\n",max(s,t));
}