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
int main(){
  int a,b,c;
  while(cin>>a>>b>>c,a!=-1||b!=-1||c!=-1){
    if(a==-1||b==-1)cout<<"F"<<endl;
    else if(a+b>=80)cout<<"A"<<endl;
    else if(a+b>=65)cout<<"B"<<endl;
    else if(a+b>=50)cout<<"C"<<endl;
    else if(a+b>=30){
      if(c>=50)cout<<"C"<<endl;
      else cout<<"D"<<endl;
    }else cout<<"F"<<endl;
  }
}