#include <iostream>
#include <vector>
using namespace std;
int main(){
  int a,b,i,j;
  while(1){
  cin>>a;
  if(a==0) break;
  vector<char>from(a);
  vector<char>to(a);
  for(i=0;i<a;i++){
    cin>>from[i]>>to[i];
  }
  cin>>b;
  vector<char>v(b);
  for(i=0;i<b;i++){
    cin>>v[i];
    for(j=0;j<a;j++){
      if(v[i]==from[j]){
        v[i]=to[j];
        break;
      }
    }
  }
  for(i=0;i<b;i++){
    cout<<v[i];
  }
  cout<<"\n";
}
return 0;
}