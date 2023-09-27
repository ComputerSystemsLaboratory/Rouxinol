#include <iostream>
#include <stack>
#include <utility>
using namespace std;

int main()
{
  typedef pair<char, int> pci;
  typedef pair<int, int> pii;
  stack<pci> s;
  stack<pii> L;
  string a;
  int A = 0, sum = 0;
  getline(cin, a);
  for(int i = 0; i < a.size(); i++){
    if(a[i] == '\\'){
      s.push(make_pair('\\', i));
    }else if(a[i] == '/'){
      if(!s.empty()){
	if(s.top().first == '\\'){
	  A += i - s.top().second;
	  if(!L.empty())
	    while(s.top().second < ((!L.empty()) ? L.top().first : 0)){
	      sum += L.top().second; 
	      L.pop();
	    }
	  L.push(make_pair(s.top().second, sum + i - s.top().second));
	  sum = 0;
	  s.pop();
	}
      }
    }
  }
  cout << A << endl;
  cout << L.size();
  stack<int> l;
  while(!L.empty()){
    l.push(L.top().second);
    L.pop();
  }
  for(int i = 0; !l.empty(); i++){
    cout << " " << l.top();
    l.pop();
  }
  cout << endl;
}