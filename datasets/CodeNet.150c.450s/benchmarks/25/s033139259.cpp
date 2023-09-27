#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
typedef long long ll;

int main(){

  string s;
  char b[26]={};
  int a[26]={};
  int j;

  for(int l=0; l<26; l++){
    b[l]='a'+l;
  }
  while(getline(cin, s)){
    for(int i=0; i<s.size(); i++){
      if(s[i]>='A'&&s[i]<='Z'){
        s[i]=s[i]-'A'+'a';
      }
      j=s[i]-'a';
      a[j]++;
    }
  }

  for(int k=0; k<26; k++){
    cout<<b[k]<<" "<<':'<<" "<<a[k]<<endl;
  }
}