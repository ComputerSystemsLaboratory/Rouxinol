#include<iostream>
#include<vector>
using namespace std;
typedef pair<int,int> mypair;
int main(void){
while(1){
int n=0;
cin>>n;
if(n==0)break;
vector<mypair> a(n);
a[0]=mypair(0,0);
int r=0,l=0,u=0,d=0;
for(int i=1;i<n;i++){
int n1,d1;
cin>>n1>>d1;
if(d1==0){
a[i]=mypair(a[n1].first-1,a[n1].second);
l=min(l,a[i].first);
}
if(d1==1){
a[i]=mypair(a[n1].first,a[n1].second-1);
d=min(d,a[i].second);
}
if(d1==2){
a[i]=mypair(a[n1].first+1,a[n1].second);
r=max(r,a[i].first);
}
if(d1==3){
a[i]=mypair(a[n1].first,a[n1].second+1);
u=max(u,a[i].second);
}

}
//cout<<r<<l<<u<<d<<endl;
cout<<r-l+1<<' '<<u-d+1<<endl;
}

return 0;
}

