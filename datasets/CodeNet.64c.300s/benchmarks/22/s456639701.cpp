#include<bits/stdc++.h>
using namespace std;
 
signed main(){
 int a;
 cin>>a;
 int b[3];
 for(int d=0;d<a;d++){
     for(int c=0;c<3;c++)scanf("%d",&b[c]);
 sort(b,b+3);
 if(b[0]*b[0]+b[1]*b[1]==b[2]*b[2])printf("YES\n");
 else printf("NO\n");
     }
}