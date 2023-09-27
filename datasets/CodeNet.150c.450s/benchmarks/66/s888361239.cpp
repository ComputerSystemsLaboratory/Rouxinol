#include <bits/stdc++.h>
using namespace std;
int main(){

  int n;
  cin>>n;

  set <string> id;

  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    id.insert(s);
  }

  int m,open=0;
  cin>>m;

  for(int i=0;i<m;i++){

    string s;
    cin>>s;

    if(id.count(s)){ // if(id.find(s) != id.end()

      open++;

      if(open%2) cout<<"Opened by "+s<<endl;
      else cout<<"Closed by "+s<<endl;

    }

    else cout<<"Unknown "+s<<endl;

  }

  return 0;

}

