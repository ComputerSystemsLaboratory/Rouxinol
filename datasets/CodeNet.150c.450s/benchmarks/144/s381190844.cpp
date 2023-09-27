#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m,l;
cin>>n>>m>>l;
int a[200][200];
int b[200][200];
long long c[200][200]={};

for(int i=1;i<=n;i++){
for(int g=1;g<=m;g++){
cin>>a[i][g];
}}
for(int i=1;i<=m;i++){
for(int g=1;g<=l;g++){
cin>>b[i][g];
}}

for(int h=1;h<=l;h++){
for(int i=1;i<=n;i++){
for(int g=1;g<=m;g++){
c[i][h]+=a[i][g]*b[g][h];
}}}

for(int i=1;i<=n;i++){
for(int g=1;g<=l;g++){
cout<<c[i][g];
if(g<l){cout<<" ";}
}
cout<<endl;
}

return 0;
}
