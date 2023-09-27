#include<iostream>
#include<map>
using namespace std;

int N,M;

void solve(){
  map<char,char>mp;
  for(int i = 0 ; i < N ; i++){
    char a,b;
    cin >> a >> b;
    mp[a] = b;
  }
  cin >> M;
  for(int i = 0 ; i < M ; i++){
    char c;
    cin >> c;
    if(mp.find(c) != mp.end())cout << mp[c];
    else cout << c;
  }
  cout << endl;
}

int main(){
  while(cin >> N,N)solve();
}