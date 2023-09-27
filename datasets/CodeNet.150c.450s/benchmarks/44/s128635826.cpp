#include <bits/stdc++.h>
#define int long long
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define INF LLONG_MAX/3
#define eps LDBL_EPSILON
#define moder (1000000007)
#define pie acos(-1)
#define P std::pair<int,int>
#define prique priority_queue
#define ggr getchar();getchar();return 0;
using namespace std;
int a,b,c,d,e,f,g,h;
signed main(){
    while(cin>>a>>b>>c>>d>>e>>f>>g>>h){
        int x=0;
        if(a==e)x++;
        if(b==f)x++;
        if(c==g)x++;
        if(d==h)x++;
        cout<<x<<" ";
        int y=0;
        if(a==f||a==g||a==h)y++;
        if(b==e||b==g||b==h)y++;
        if(c==e||c==f||c==h)y++;
        if(d==e||d==f||d==g)y++;
        cout<<y<<endl;
    }
}
