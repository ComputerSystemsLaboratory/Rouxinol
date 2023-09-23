#include<iostream>
#include<cstring>
using namespace std;

int main(){
int r,c;
int a[500][500];
int Ans[600][600];
memset(Ans,0,sizeof(Ans));
cin>>r>>c;
for(int i=1;i<=r;i++){
for(int j=1;j<=c;j++){
cin>>a[i][j];
Ans[i][j]=a[i][j];
}
}
for(int i=1;i<=r;i++){
for(int j=1;j<=c;j++){
Ans[r+1][j] += a[i][j];
Ans[i][c+1] += a[i][j];
Ans[r+1][c+1] += a[i][j];
}
}
for(int i=1;i<=r+1;i++){
for(int j=1;j<=c+1;j++){
if(j>c){
cout<<Ans[i][j]<<endl;
}
else{
cout<<Ans[i][j]<<' ';
}
}
}
return 0;
}