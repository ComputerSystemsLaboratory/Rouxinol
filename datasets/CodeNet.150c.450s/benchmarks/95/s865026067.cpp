#include<iostream>
#include<cstring>
using namespace std;

int main(){
  string s;
  int n;
  while(cin>>n,n){
    char c='0';
    int ans=0;
    for(int i=0;i<n;i++){
      cin>>s;
      if(c==s[1])ans++;
      c=s[1];
    }
    cout << ans << endl;
  }
  return 0;
}