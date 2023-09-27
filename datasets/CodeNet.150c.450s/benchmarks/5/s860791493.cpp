#include <iostream>
#include <stack>
using namespace std;

int main(){
  int n;
  int x;
  stack<int> a;

  cin>>n;

  for(int i=0; i<n; i++){
    cin>>x;
    a.push(x);
  }

  for(int i=0; i<n; i++){
    if(i==n-1){
      cout<<a.top()<<endl;
    }else{
      cout<<a.top()<<" ";
      a.pop();
    }
  }

  return 0;

}