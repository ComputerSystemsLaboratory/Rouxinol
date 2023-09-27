#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<map>
#include<string>
#include<algorithm>
#include<functional>
#define ll long long
#define inf  999999999
#define con 131072
#define pa pair<int,int>

using namespace std;

int a[300000];

int sums(int i,int j ){
if(i==j) return a[i];
else if(i%2==1) return a[i]+sums(i+1,j);
else if(j%2==0) return a[j]+sums(i,j-1);
else return sums(i/2,j/2);
}


void upd(int x,int y){
a[x]=a[x]+y;
x=x/2;
while(x != 0){
a[x]=a[2*x+1]+a[2*x];
x=x/2;
}
}


int main(){
int n,q,com,x,y;
for(int i=0;i<270000;i++) a[i]=0;
cin>>n>>q;
for(int i=0;i<q;i++){
cin>>com>>x>>y;
if(com==1) cout<<sums(x+con,y+con)<<endl;
else upd(x+con,y);

}



	return 0;
}