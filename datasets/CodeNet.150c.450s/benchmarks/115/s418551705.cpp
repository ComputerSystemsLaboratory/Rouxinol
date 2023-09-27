#define PI 3.14159265359
#define INF 2000000000
#define MAX 500000
#include <map>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
typedef long long ll;

void LCS(string X,string Y){
 int c[1002][1002];
 int n=X.length(),m=Y.length();
 for(int i=0;i<=max(n,m);i++){
     c[i][0]=c[0][i]=0;
 }
 for(int i=1;i<=n;i++){
     for(int j=1;j<=m;j++){
         if(X[i-1]==Y[j-1])
           c[i][j]=c[i-1][j-1]+1;
         else{
           c[i][j]=max(c[i][j-1],c[i-1][j]);
         }
     }
 }
 cout<<c[n][m]<<endl;
}

int main(){
    int q;
    cin>>q;
    string X,Y;
    for(int i=0;i<q;i++){
        cin>>X>>Y;
        LCS(X,Y);
    }
}