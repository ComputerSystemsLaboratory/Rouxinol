#include<iostream>
#include<vector>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
using namespace std;
int main(){
  int a,b;
  while(cin>>a>>b,a||b){
    vector<int>in(a);
    rep(i,a)cin>>in[i];
    int sum=0;
    rep(i,b)sum+=in[i];
    int ma=sum;
    rep(i,a-b){
      sum-=in[i];
      sum+=in[i+b];
      ma=max(ma,sum);
    }
    cout<<ma<<endl;
  }

}