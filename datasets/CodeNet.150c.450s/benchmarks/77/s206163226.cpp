#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#define f first
#define s second
#define x first
#define y second
using namespace std;

typedef pair<int,int>pii;

void func(char dir, int dist, set<pii>&gems, pii &current){
  if(dir == 'E' || dir == 'W'){
    for(int i=0;i<dist;i++){
      current.x += (dir=='E'?1:-1);
      gems.erase(current);
    }
  }
  else{
    for(int i=0;i<dist;i++){
      current.y += (dir=='N'?1:-1);
      gems.erase(current);
    }
  }
}

int main(void){
  int n,m;

  while(cin >> n, n){
    set<pii>gems;
    for(int i=0;i<n;i++){
      int a,b;
      cin >> a >> b;
      gems.insert(pii(a,b));
    }
    cin >> m;
    pii curr=pii(10,10);
    for(int i=0;i<m;i++){
      char dir;
      int dist;
      cin >> dir >> dist;
      func(dir,dist,gems,curr);
    }
    cout << (gems.size()==0?"Yes":"No") << endl;
  }
  return 0;
}