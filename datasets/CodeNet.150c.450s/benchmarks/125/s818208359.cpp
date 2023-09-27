#include <utility>
#include <algorithm>
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
vector <int> m[103];
int kakunin[103]={0};
int d[103];
int f[103];
int cnt=0;
void dfs(int num){
    d[num]=cnt++;
    for(int i=0;i<m[num].size();i++){
        if(kakunin[m[num][i]]==0){kakunin[m[num][i]]=1;dfs(m[num][i]);}}
    f[num]=cnt++;
}
int main() {
    int n,a,tmp,id;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>id;
        cin>>a;
        for(int j=0;j<a;j++){
            scanf("%d",&tmp);
            m[id].push_back(tmp);
        }
    }
    for(int i=0;i<102;i++){m[0].push_back(i);}
    dfs(0);
    for(int i=1;i<=n;i++){
        cout<<i<<" "<<d[i]-1<<" "<<f[i]-1<<endl;}
}