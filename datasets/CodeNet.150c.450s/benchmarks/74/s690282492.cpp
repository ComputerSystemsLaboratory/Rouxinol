#include<iostream>
#include<algorithm>

using namespace std;

int main(){
int i,j,n,m;
cin >> n >> m;
int a[m],ret[n+1];
for(i=0;i<m;i++)cin>>a[i];
ret[0]=0;
for(i=1;i<n+1;i++)ret[i]=1000000000;
for(i=0;i<=n;i++){
for(j=0;j<m;j++)if(i+a[j]<n+1)ret[i+a[j]]=min(ret[i+a[j]],ret[i]+1);
}
cout << ret[n] << endl;
return 0;
}
