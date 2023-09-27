#include<bits/stdc++.h>
#include<cctype>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);i++)
#define all(v) (v).begin(),(v).end()
typedef long long int ll;
#define pi 3.1415926535897932384
#define E9 1000000000
#define eps 1e-4
#define pii pair<int,int> 


int main(){
  string cross; cin >> cross;
  stack<int> s1;
  stack<pii> s2;
  int Atot = 0;

  rep(i,cross.size()){
    if (cross[i]=='-') continue;
    else if (cross[i]=='\\'){
      s1.push(i);
    }
    else if (cross[i]=='/' && !s1.empty()){
      int Asub = i - s1.top(); 
      Atot += Asub; 

      while (!s2.empty() && s2.top().first>=s1.top()){
        Asub += s2.top().second; s2.pop();
      }
      s2.push(make_pair(i,Asub));
      s1.pop();
    }
  }

  cout << Atot << endl;
  cout << s2.size();
  stack<int> a;
  while(!s2.empty()) {
    a.push(s2.top().second);
    s2.pop();
  }
  while(!a.empty()){
    cout << " " << a.top();
    a.pop();
  }
  cout << endl;
  
   
  return 0;
}

