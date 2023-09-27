#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
 string s,p,op;
 int a,b,q;

 cin >> s >> q;

 for(int i=0;i<q;i++){
  cin >> op >> a >> b;
  if(op=="print")cout << s.substr(a,b-a+1) << endl;
  else if(op=="reverse")reverse(s.begin()+a,s.begin()+b+1);
  else{
   cin >> p ;
   s=s.substr(0,a)+p+s.substr(b+1,s.length()-b-1);
  }
 }

 return 0;
}