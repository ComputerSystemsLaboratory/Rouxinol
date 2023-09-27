#include <iostream>
#include <queue>
using namespace std;

int main(){
    
  int i,n,q,a,sum=0,c=0;
  cin >> n >> q;
  queue<string> qu1;
  queue<int> qu2;

  for(i=0;i<n;i++){
    string s;
    cin >> s >> a;
    qu1.push(s);
    qu2.push(a);
  }

  while(c!=n){
    a=qu2.front();
    a=a-q;
    sum+=q;
    qu2.pop();
    if(a>0){
      qu2.push(a);
      qu1.push(qu1.front());
      qu1.pop();
    }
    else{
      sum+=a;
      cout << qu1.front() << " " << sum << endl;
      c++;
      qu1.pop();
    }
  }
  return 0;
}