#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<int,int> P;
const ll MOD=1000000007;
const ll INF=1000000010;
const ll LINF=4000000000000000010LL;
const int MAX=310;
const double EPS=1e-8;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(){
    double a,b,c,d,e,f;
    while(cin>>a>>b>>c>>d>>e>>f){
        double y=(a*f-c*d)/(a*e-b*d);
        double x=(-b*y+c)/a;
        x*=1000;
        printf("%.3f ",round(x)/1000);
        y*=1000;
        printf("%.3f\n",round(y)/1000);
    }
}
