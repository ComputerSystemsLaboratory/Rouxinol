#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb(in,tmp) in.push_back(tmp)
#define all(in) in.begin(),n.end()
#define PI acos(-1)
using namespace std;
int main(){
  bool in[30]={false};
  rep(i,28){
    int tmp;
    cin>>tmp;
    in[tmp-1]=true;
  }
  rep(i,30)if(!in[i])cout<<i+1<<endl;

}
/*int main(){

  int a[30]={0};
  rep(i,28){
    int tmp;
    cin>>tmp;
    a[--tmp]++;
  }
  rep(i,30)if(!a[i])cout<<i+1<<endl;


}*/