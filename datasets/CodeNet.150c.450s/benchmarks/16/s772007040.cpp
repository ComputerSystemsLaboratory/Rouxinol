#include <iostream>
#include <vector>

using namespace std;

string str;
int calc(int a, int b){
  int acc = 0, depth = 0;
  for(int i=a;i<=b;++i){
    switch(str[i]){
    case '\\':
      acc += depth*2 + 1;
      ++depth;
      break;
    case '/':
      if(depth > 0){
	--depth;
	acc += depth * 2 + 1;
      }
      break;
    case '_':
      acc += depth * 2;
      break;
    }
  }
  return acc;
}

int main(){
  cin >> str;

  int A = 0;
  vector<int> L;
  int st[40000], ed[40000], depth = 20000;
  fill(st, st+40000, -1);
  fill(ed, ed+40000, -1);
  for(int i=0;i<str.length();++i){
    switch(str[i]){
    case '\\':
      st[depth++] = i;
      break;
    case '/':{
      int s = st[--depth];
      if(s >= 0)
	ed[s] = i;
      break;
    }
    case '_':
      break;
    }
  }

  for(int i=0;i<str.length();++i){
    int nxt = ed[i];
    if(nxt < 0) continue;
    int res = calc(i,nxt);
    A += res;
    L.push_back(res);
    i = nxt;
  }

  cout << A / 2 << endl;
  cout << L.size();
  for(int i=0;i<L.size();++i)
    cout << " " << L[i] / 2;
  cout << endl;

  return 0;
}