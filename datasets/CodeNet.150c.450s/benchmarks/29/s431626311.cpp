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
#include<list>
using namespace std;
int inf = 1000000000;

int main(void) {

  int n;
  cin >> n;
  list<int> l;
  for(int i=0; i<n; i++){
    // string s;
    char s[50];
    int x;
    // cin >> s;
    scanf("%s", s);
    if( s[0] == 'd' && s[6] == 'L'){
      l.pop_back();
    }else if( s[0] == 'd' && s[6] == 'F' ){
      l.pop_front();
    }else if( s[0] == 'i' ){
      scanf("%d", &x);
      l.push_front(x);
    }else if( s[0] == 'd' ){
      scanf("%d", &x);
      for(list<int>::iterator a=l.begin(); a!=l.end(); a++){
        if( *a == x ){
          l.erase(a);
          break;
        }
      }
    }
  }
  for(list<int>::iterator a=l.begin(); a != l.end();){
    cout << *a;
    if(++a != l.end() ) cout << " ";
    else cout << endl;
  }

  return 0;
}


// EOF