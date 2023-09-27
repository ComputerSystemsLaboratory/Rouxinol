#include<iostream>
#include<vector>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
int main(){
  vector<string>sis(256);
  int n,m;

  cin>>n;
  rep(i,n)cin>>sis[i];

  cin>>m;
  int key=1;
  rep(i,m){
    string in;
    bool known=false;
    cin>>in;
    rep(i,n)if(sis[i]==in)known=true;
    if(known){
      if(key){cout<<"Opened by "<<in<<endl;key=0;}
      else {cout<<"Closed by "<<in<<endl;key++;}
    }else cout<<"Unknown "<<in<<endl;
  }
} 