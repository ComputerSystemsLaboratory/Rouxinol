//itp1_topic8_A
#include <bits/stdc++.h>
using namespace std;

int main(){
  string str;

  getline(cin,str);

  for(int i=0;i<(int)str.size();i++){
      if( islower(str[i]) ){
	str[i]=toupper(str[i]);
      }
      else if( isupper(str[i]) ){
	str[i]=tolower(str[i]);
      }

    }
  cout<<str<<endl;
  return 0;
}
