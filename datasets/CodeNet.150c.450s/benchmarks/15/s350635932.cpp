#include<iostream>
#include<set>
using namespace std;
int main(){
  set<int> a;
  int n,s,q,t,c=0;;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> s;
    a.insert(s);
  }
  cin >> q;
  for(int i=0;i<q;i++){
    cin >> t;
    if(a.find(t)!=a.end()){
      c++;
    }
  }
  cout << c << endl;
  return 0;
}

  