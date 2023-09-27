#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
using namespace std;
vector<string> Bubble(vector<string> s, int n){
  for(int i=0; i<n; i++){
    for(int j = n-1; j>=i+1; j--){
      if( s[j][1]-'0' < s[j-1][1]-'0' ) swap(s[j], s[j-1]);
    }
  }
  return s;
}
vector<string> Select(vector<string> s, int n){
  for(int i=0; i<n; i++){
    int minj = i;
    for(int j = i; j<n; j++){
      if( s[j][1]-'0' < s[minj][1]-'0' ) minj = j;
    }
    swap(s[i], s[minj]);
  }
  return s;
}
int main(void) {
  int n;
  cin >> n;
  vector<string> s(n);
  for(int i=0; i<n; i++) cin >> s[i];
  vector<string> a = Bubble(s, n);
  vector<string> b = Select(s, n);
  for(int i=0; i<n-1; i++) cout << a[i] << " ";
  cout << a[n-1] << endl;
  cout << "Stable" << endl;
  for(int i=0; i<n-1; i++) cout << b[i] << " ";
  cout << b[n-1] << endl;
  cout << ( a == b ? "Stable" : "Not stable" ) << endl;
  return 0;
}





// EOF