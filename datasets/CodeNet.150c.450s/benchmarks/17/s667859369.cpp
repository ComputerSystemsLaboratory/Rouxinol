#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main(){
  int a,b,c,d,e;
  vector<int> l;

  while(cin>>a>>b>>c>>d>>e){

    l.push_back(a);
    l.push_back(b);
    l.push_back(c);
    l.push_back(d);
    l.push_back(e);

    sort(l.begin(),l.end());

    for(int i=4; i>=0; i--){
      cout<<l[i];
      if(i) cout<<" ";
    }
    cout<<endl;
    l.clear();
  }
}