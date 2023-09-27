#include <iostream>
#include <map>
using namespace std;

void solve(){

}
typedef pair<string,int> PSI;

int main(){
  string s;
  map<string, int> cnt;
  PSI mostcnt("",0), mostlen("",0);
  while(cin >> s){
    cnt[s]++;
    if(mostcnt.second < cnt[s]){
      mostcnt = PSI(s, cnt[s]);
    }
    if(mostlen.second < (int)s.size()){
      mostlen = PSI(s, s.size());
    }
  }
  cout << mostcnt.first << " " << mostlen.first << endl;
  
  return 0;
}