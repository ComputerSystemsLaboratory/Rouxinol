#include<iostream>
using namespace std;
int main(){
  int n;
  while(cin>>n){
    if(n==0) break;
    char c[n][2],s;
    for(int i=0;i<n;i++) cin >> c[i][0] >> c[i][1];
    int m;
    cin >> m;
    for(int i=0;i<m;i++){
      cin >> s;
      bool ok = true;
      for(int j=0;j<n;j++){
	if(s==c[j][0]){
	  cout << c[j][1];
	  ok = false;
	  break;
	}
      }
      if(ok) cout << s;
    }
    cout << endl;
  }
  return 0;
}