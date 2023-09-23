#include<iostream>
using namespace std;

int main(){

int n,m,b[1000],a[1000][1000],SUM[1000];

for(int i=1;i<1000;i++){
SUM[i]=0;
}

cin>>n>>m;

for(int i=1;i<=n;i++){
for(int j=1;j<=m;j++){

cin>>a[i][j];

}
}

for(int i=1;i<=m;i++){
cin>>b[i];
}

for(int i=1;i<=n;i++){
for(int j=1;j<=m;j++){
SUM[i] += a[i][j]*b[j];
}
cout<<SUM[i]<<endl;
}

return 0;
}