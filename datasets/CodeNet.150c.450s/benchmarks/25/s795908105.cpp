#include <iostream>
#include <string>
using namespace std;

int main(){
 char c,c2,c3;
 int n;
 int cnt[26]={0};

 while (cin>>c){
  c2=tolower(c);
  n=c2-'a';
  cnt[n]++;
 }
 for(int i=0;i<26;i++){
  c3='a'+i;
  cout << c3 << " : " << cnt[i] << endl;
 }

 return 0;
}