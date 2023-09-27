#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  string str,command,p;
  int i,n,a,b;

  cin >> str >> n;

  for(i = 0; i < n; i++){
    cin >> command >> a >> b;
    if(command == "replace"){
      cin >> p;
      str.replace(a,b - a + 1,p);
    }
    else if(command == "reverse"){
      p = str.substr(a,b - a + 1);
      reverse(p.begin(),p.end());
      str.replace(a, b - a + 1, p);
    }
    else cout << str.substr(a, b - a + 1) << endl;
  }
}