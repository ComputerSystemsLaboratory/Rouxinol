#include<iostream>
#include<map>
using namespace std;
int main(){
  for(;;){
    int n, m;
    map<char, char> mpa;
    cin >> n;
    if(n == 0) break;
    for(int i = 1; i <= n; i++){
      char a, b;
      cin >> a >> b;
      mpa[a] = b;
    }
    cin >> m;
    for(int i = 1; i <= m; i++){
      char c;
      cin >> c;
      if(mpa.count(c)){
	cout << mpa[c];
      }else{
	cout << c;
      }
    }
    cout << endl;
  }
  return 0;
}