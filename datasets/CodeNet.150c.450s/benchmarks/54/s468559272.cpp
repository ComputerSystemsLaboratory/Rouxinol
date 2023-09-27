#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  int cnt=0;
  string w, t;
  cin>>w;
  while(1){
    cin>>t;
    if(t=="END_OF_TEXT") break;
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    if(t==w) cnt++;
  }
  cout<<cnt<<endl;

  return 0;
}