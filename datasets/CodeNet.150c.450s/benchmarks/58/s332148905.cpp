#include<bits/stdc++.h>
using namespace std;
int main(){
  string a;
  int st[100];
  int I=0;
  while(1){
    stringstream ss;
    cin >> a;
    if(cin.eof())break;
    if(a[0]>='0'&&a[0]<='9'){
      ss << a;
      ss >> st[I];
      //cout << st[I];
      I++;
    }
    else{
      int r;
      int l;
      r=st[I-1];
      l=st[I-2];
      // cout << l << " "<<r<<endl;
      I-=2;
      if(a=="+"){
	st[I]=l+r;
	I++;
      }
      else if(a=="-"){
	st[I]=l-r;
	I++;
      }
      else{
	st[I]=l*r;
	I++;
      }
    }
  }
  cout << st[0]<<endl;
  return 0;
}