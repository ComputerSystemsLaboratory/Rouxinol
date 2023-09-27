
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
#include<set>
#include<map>

using namespace std;
typedef long long ll;
#define i_7 1000000007
#define i_5 1000000005

ll mod(ll a){
    ll c=a%i_7;
    if(c>=0)return c;
    else return c+i_7;
}
typedef pair<int,int> i_i;
typedef pair<ll,ll> l_l;
typedef pair<double,double>d_d;
#define inf 100000000//10^8

/////////////////////////////////




int main(){
    int n;
    while(cin>>n,n){
        int a[60*60*24+5];
        memset(a,0,sizeof(a));
        for(int i=0;i<=2*n-1;i++){
            int h,m,s;scanf("%d:%d:%d",&h,&m,&s);
            
            if(i%2==0)a[s+60*m+3600*h]++;
            else a[s+60*m+3600*h]--;
        }
        for(int i=1;i<=60*60*24+1;i++){
            a[i]+=a[i-1];
        }
        int max=0;
        for(int i=0;i<=60*60*24+1;i++){
            if(a[i]>max)max=a[i];
        }
        cout<<max<<endl;
    }
    return 0;
}

