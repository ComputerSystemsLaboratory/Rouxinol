/*
  by Guille
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define fa(i,I,n) for(int i=I;i<n;i++)
#define sz(x) x.size()
#define sc(x) scanf("%d",&x)
#define mos(x) cout<<#x<<" = "<<x<<endl;
#define zero(x) memset(x,0,sizeof(x))
#define mone(x) memset(x,-1,sizeof(x))
#define X first
#define Y second
#define p push
#define ll long long
#define pb push_back
#define N 400005

const double pi=acos(0)*2.,err=1e-12;
const int oo=1<<28;
typedef pair<int,int> pii;
typedef vector<int> vi;

int n;

int main(){
    sc(n);
    printf("%d:",n);
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                printf(" %d",i);
                n/=i;
            }
        }
    }
    if(n>1)printf(" %d",n);
    printf("\n");
    return 0;
}