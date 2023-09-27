#include <iostream>
#include <queue>
using namespace std;
int main(){

  priority_queue <int> a;
  int tmp1;
  string tmp2;

  while(cin>>tmp2,tmp2!="end"){
    if(tmp2[0]=='i'){
      cin>>tmp1;
      a.push(tmp1);
    }
    else{
      cout<<a.top()<<endl;
      a.pop();
    }
  }
  return 0;

}