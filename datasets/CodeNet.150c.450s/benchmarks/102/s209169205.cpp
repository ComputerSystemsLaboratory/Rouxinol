#include<bits/stdc++.h>
using namespace std;
char n[100][100];int k[100][100],l[100][100],sum,H,W,i,j,m,s;
#define A(B,C) if(k[B][C]!=1){l[B][C]=1;}
int main(){while(true){s=0;memset(l,0,sizeof(l));cin>>W>>H;if(W==0){break;}for(i=1;i<=H;i++){for(j=1;j<=W;j++){cin>>n[i][j];if(n[i][j]=='.'){k[i][j]=0;}else if(n[i][j]=='@'){k[i][j]=2;l[i][j]=1;}else{k[i][j]=1;}}}
for(i=0;i<2500;i++){for(j=1;j<=H;j++){for(m=1;m<=W;m++){if(l[j][m]==1){A(j-1,m);A(j+1,m);A(j,m-1);A(j,m+1);}}}}
for(j=1;j<=H;j++){for(m=1;m<=W;m++){if(l[j][m]==1){s++;}}}cout<<s<<endl;}}