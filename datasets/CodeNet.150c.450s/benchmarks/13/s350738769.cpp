//itp1_topic8_D
#include <bits/stdc++.h>
using namespace std;

int main(){
  int i,kantei=0,mum_a[26],mum_b[26];
  string a,b;
  bool flag=false;

  cin>>a;
  cin>>b;

  a=a+a;
  for(i=0;i<(int)a.size()-(int)b.size()+1;i++){
    string t=a.substr(i,(int)b.size());

    if(t==b){
      flag=true;
      break;
    }
  }

  if(flag) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;

  return 0;
}

