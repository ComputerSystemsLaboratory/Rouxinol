#include<iostream>
using namespace std;
int main(){
int a,b,c,i,j;
while(cin>>a>>b,a) {
int d[20][20]={0};
bool e[20][20]={0};
cin>>c;
while(c--){
cin>>i>>j;
e[i][j]=1;
}
d[1][1]=1;
for(i=1;i<=a;i++){
for(j=1;j<=b;j++){
if(e[i][j])continue;
d[i][j]+=d[i-1][j]+d[i][j-1];
}
}
cout<<d[a][b]<<endl;
}
}