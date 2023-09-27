#include <bits/stdc++.h>
#define cinf(n,x) for(int i=0;i<(n);i++) cin >> x[i];
typedef long long int ll;
using namespace std;

int main(){
	while(1){
	  int a; cin >> a;
	  string s; cin >>s;
	  int b ; cin >>b;
	  if(s == "?")break;
	  else if(s == "+")cout << a+b << endl;
	  else if(s == "-")cout << a-b << endl;
	  else if(s == "*")cout << a*b << endl;
	  else if(s == "/")cout << a/b << endl;

	}
}
