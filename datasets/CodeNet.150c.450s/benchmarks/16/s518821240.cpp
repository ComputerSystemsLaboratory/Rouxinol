#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
//using ll = long long;
using namespace std;

int main(){
  stack<int> ss;
  list<pair<int, int> > lm;
  string str;
  cin >> str;
  int ans = 0, count = 0;
  for(int i = 0; str[i] != '\0'; i++){
    char c = str[i];
    if(c == '\\'){
      ss.push(i);
    }else if(c == '/'){
      if(!ss.empty()){
        int si = ss.top(); ss.pop();
        int addi = si;
        int addm = i - si;
        while(!lm.empty()){
          pair<int, int> pl;
          pl = lm.back();
          if(addi < pl.first){
            addm += pl.second;
            ans -= pl.second;
            lm.pop_back();
            count--;
          }else break;
        }
        ans += addm;
        lm.push_back(make_pair(addi, addm));
        count++;
      }
    }
  }
  
  cout << ans << endl;
  cout << count;
  
  for(list<pair<int, int> >::iterator itr = lm.begin(); itr != lm.end(); itr++){
    cout << " " << itr->second;
  }
  
  cout << endl;
  
  return 0;
}
