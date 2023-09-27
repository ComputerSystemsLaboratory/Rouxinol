#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  string str;
  cin>>str;
  reverse(str.begin(),str.end());
  cout<<str<<endl;
  return 0;;
}

