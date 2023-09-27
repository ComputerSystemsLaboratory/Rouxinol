#include <iostream>
#include <map>
using namespace std;
int main(){
  char a,b;
  int n, m;

  while(true){
    map<char,char> mp;
    cin >> n;
    if( !n )
      break;
    while( n-- ){
      cin >> a >> b;
      mp[a] = b;
    }

    cin >> m;
    while( m-- ){
      cin >> a;
      if( mp.find(a) == mp.end() )
	cout << a;
      else
	cout << mp[a];
    }
    cout << endl;
  }
}