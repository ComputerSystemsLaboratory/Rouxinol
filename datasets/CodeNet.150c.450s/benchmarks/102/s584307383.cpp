#include <bits/stdc++.h>
using namespace std;
int w,h;
char a[100][100];
int dfs(int i,int j){
    if(i==h||j==w||i<0||j<0)return 0;
    if(a[i][j]=='#')return 0;
    int s=1;
    a[i][j]='#';
    s+=dfs(i+1,j);
    s+=dfs(i-1,j);
    s+=dfs(i,j+1);
    s+=dfs(i,j-1);
    return s;
}
int main(){
    int i,j;
    while(cin>>w>>h,w!=0&&h!=0){
    //char a[h][w];
    for(i=0;i<h;i++)cin>>a[i];
    for(i=0;i<h;i++)for(j=0;j<w;j++)if(a[i][j]=='@')cout<<dfs(i,j)<<endl;
}}