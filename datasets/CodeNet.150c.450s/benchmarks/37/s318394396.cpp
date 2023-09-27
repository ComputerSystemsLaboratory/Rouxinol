#include <bits/stdc++.h>
#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define itrep(i,x) for(auto i=(x).begin(); i!=(x).end();i++)
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vi vector<int>
#define INF (int)1e9
#define INFL 1e18
#define MOD 1000000007
#define pb push_back
#define MP make_pair
#define PI 3.1415926535
typedef long long int ll;
typedef std::pair<int,int> P;
int D=1;
int dx[4]={0,1,0,-1},dy[4]={-1,0,1,0};

using namespace std;

double se(double x){
    x*=10000.0;
    if((int)x%10>=5){
        x+=10.0;
    }
    x/=10000.0;
    
    return x;
}

int main(){
    double a,b,c,d,e,f;
    while(cin>>a>>b>>c>>d>>e>>f){
        printf("%.3f ",(c*e-f*b)/(a*e-b*d)+0.0);
        printf("%.3f\n",(a*f-c*d)/(a*e-b*d)+0.0);
    }
    
    return 0;
}

