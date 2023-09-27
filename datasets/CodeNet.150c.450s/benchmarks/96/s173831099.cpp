#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int j=0;j<n;j++){
  string s;
  cin>>s;
  char u=' ', b=0;
  char p[]={' ','.', 'a','d','g','j','m','p','t','w'};
  string t="";
  for(int i=0; i<s.size();i++) {
    int x=s[i]-'0';
    if (x==0) {
      if (b>0) {
      if (u=='.') {
        char f[]={'.',',','!','?', ' '};
        t+=string(1, f[b-1]);
      } else {
        t+=string(1, (char)(u+b-1));
      }
      b = 0;
      }
    } else {
      u=p[x];
      b++;
      if (x==7||x==9) {
        if (b==5) b=1;
      } else if (x==1) {
        if (b==6) b=1;
      } else if (b==4) b=1;
    }
  }
  cout<<t<<endl;
}
  return 0;
}
  
  