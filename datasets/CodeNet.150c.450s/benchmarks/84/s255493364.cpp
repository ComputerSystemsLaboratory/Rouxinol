#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iostream>
#include<queue>
#include<vector>
#include <bitset>
#include<math.h>
using namespace std;
#define INF 10000000
#define MOD 1000000007
typedef long long ll;
typedef pair<ll,int> P;

//[1,n]
int bit[210000+1],n;

int sum(int i){
    int s=0;
    while(i>0){
        s+=bit[i];
        i-=i&-i;
    }
    return s;
}

void add(int i,int x){
    while(i<=n){
        bit[i]+=x;
        i+=i&(-i);
        //cout<<i<<endl;
    }
}


int main(){
   ll ans=0;
   P a[210000];
   int num[210000];
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>a[i].first;
       a[i].second=i;
   }
   sort(a,a+n);
   for(int i=0;i<n;i++){
       num[a[i].second]=i;
   }

   for(int j=0;j<n;j++){
       ans+=j-sum(num[j]+1);
       add(num[j]+1,1);
       //cout<<ans<<endl;
   }
   //cout<<sum(5)<<endl;
   cout<<ans<<endl;
}

