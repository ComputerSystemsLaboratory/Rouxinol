#include<bits/stdc++.h>
using namespace std;

int main(){
int m,n;
int a[1000][1000];
int b[1000];
cin>>m>>n;

for(int i=1;i<=m;i++){
for(int g=1;g<=n;g++){
cin>>a[i][g];
}}
for(int g=1;g<=n;g++){
cin>>b[g];
}

int c[1000]={};
for(int i=1;i<=m;i++){
for(int g=1;g<=n;g++){
c[i]+=a[i][g]*b[g];
}}

for(int i=1;i<=m;i++){
cout<<c[i]<<endl;
}

return 0;
}
