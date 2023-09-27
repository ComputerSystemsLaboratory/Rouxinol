#include<iostream>
#include<cstring>
using namespace std;

int main(){
const int MAX_N=500;
long long int n,m,l,a[MAX_N][MAX_N],b[MAX_N][MAX_N],Ans[MAX_N][MAX_N];
memset(Ans,0,sizeof(Ans));
cin>>n>>m>>l;
for(int i=1;i<=n;i++){
for(int j=1;j<=m;j++){
cin>>a[i][j];
}
}
for(int i=1;i<=m;i++){
for(int j=1;j<=l;j++){
cin>>b[i][j];
}
}
for(int i=1;i<=n;i++){
for(int j=1;j<=l;j++){
for(int k=1;k<=m;k++){
Ans[i][j] += a[i][k]*b[k][j];
}
}
}
for(int i=1;i<=n;i++){
for(int j=1;j<=l;j++){
if(l==j){
cout<<Ans[i][j]<<endl;
}
else{
cout<<Ans[i][j]<<' ';
}
}
}
return 0;
}