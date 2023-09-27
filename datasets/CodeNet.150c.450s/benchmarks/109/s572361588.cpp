#include <iostream>
#include <string>
using namespace std;
string a[10001],b[10001];
int n;

int s2n(string str){
  int num=0;
  int c = 0;
  
  for(int j=0;j<str.size();j++) {
    if(j == 2) {
      c += num*60*60;
      num = 0;
      continue;
    }
    if(j == 5) {
      c += num*60;
      num = 0;
      continue;
    }
    num *= 10;
    num += str[j]-'0';
    
  }
  c += num;
  return c;
  
}
int main() {
  while(1) {
    cin >> n;
    if(n == 0) break;
    int time[86401]={};
    int c ,d;
    for(int i=0;i<n;i++) {
      cin >> a[i] >> b[i];
      c = s2n(a[i]);
      d = s2n(b[i]);
      //  cout << c << " "<<d <<endl;
      time[c]++;
      time[d]--;
    }
    int ans=-1;
    for(int i=1;i<=86400;i++){
      time[i] += time[i-1];
      if(time[i] > ans) ans = time[i];
    }
    cout << ans <<endl;
  }
  return 0;
}