#include<iostream>
#include<string>
using namespace std;

int main(){
int n,b[100000],f[100000],r[100000],v[100000];
int A[5][4][11];

for(int i=1;i<5;i++){
for(int j=1;j<4;j++){
for(int k=1;k<11;k++){
A[i][j][k]=0;
}
}
}

cin>>n;
for(int i=1;i<=n;i++){
cin>>b[i]>>f[i]>>r[i]>>v[i];
A[b[i]][f[i]][r[i]] += v[i];
}

for(int i=1;i<=4;i++){
for(int j=1;j<=3;j++){
for(int k=1;k<=10;k++){
cout<<" "<<A[i][j][k];
}
cout<<endl;
}
if(i!=4){
cout<<"####################"<<endl;
}
}

return 0;
}

