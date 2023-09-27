#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct cross{
  int i;
  int j;
};

int main(){
  queue<cross> que;
  vector<cross> con;
  vector<cross>::iterator conit;
  int a, b, n, ans = 0;

  while(1){
    con.clear();
    ans = 0;
    cin >> a >> b;
    if(a == 0 || b == 0) break;
    cin >> n;
    for(int i = 0; i < n; i++){
      cross con1;
      cin >> con1.i >> con1.j;
      con.push_back(con1);
    }

    cross cro;
    cro.i = 1;
    cro.j = 1;
    que.push(cro);
    while(!(que.empty())){
      int i1[] = {1, 0};
      int j1[] = {0, 1};
      for(int i = 0; i < 2; i++){
	cro = que.front();
	cro.i += i1[i];
	cro.j += j1[i];
	if(cro.i == a && cro.j == b){
	  ans++;
	}else if(cro.i <= a && cro.j <= b){
	  for(conit = con.begin(); conit != con.end(); conit++){
	    if(cro.i == (*conit).i && cro.j == (*conit).j) break;
	    if(conit == con.end() -1) que.push(cro);
	  }
	}
      }
      que.pop();
    } 

    cout << ans << endl;
  }

  return 0;
}