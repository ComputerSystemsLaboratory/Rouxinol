#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
int in[4][3][10]={0};
int main(){
int n;
cin>>n;
rep(i,n){
int a,b,c,d;
cin>>a>>b>>c>>d;
in[--a][--b][--c]+=d;
}
rep(i,4){
rep(j,3){
rep(k,10){
cout<<" "<<in[i][j][k];
}
cout<<endl;
}
if(i==3)break;
cout<<"####################"<<endl;
}
}