#include <iostream>
#include <stack>
using namespace std;

int main(){
  int n;
  int a[10];
  cin>>n;
  while(n--){
    for(int i=0;i<10;i++) cin>>a[i];
    stack<int> b,c;
    b.push(0);c.push(0);
    for(int i=0;i<10;i++){
      if(b.top()>a[i]&&c.top()>a[i]){
	cout<<"NO"<<endl;
	break;
      }
      else if(b.top()>=c.top()&&b.top()<a[i]) b.push(a[i]);
      else c.push(a[i]);
      if(i==9) cout<<"YES"<<endl;
    }
  }
  return 0;
}