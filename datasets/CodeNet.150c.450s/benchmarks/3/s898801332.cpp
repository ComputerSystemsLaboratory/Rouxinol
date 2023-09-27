#include<iostream>
#include<cctype>
using namespace std;

#include<cstdio>
#include<cstring>
#include<string>

int main(){
  string s, t, p, com;
  int q, a, b;

  cin >> s >> q;

  for (int i=0; i<q; i++){
    cin >> com >> a >> b;
    if (com=="print"){
      cout << s.substr(a, b-a+1) << "\n";
    }
    if (com=="reverse"){
      t=s;
      for (int j=a; j<=b; j++){
	t[j]=s[b-j+a];
      }
      s=t;
    }
    if (com=="replace"){
      cin >> p;
      t=s;
      s=t.substr(0, a)+p+t.substr(b+1,t.size()-b-1);
    }
  }

  return 0;
}