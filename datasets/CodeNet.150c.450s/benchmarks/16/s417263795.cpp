#include <bits/stdc++.h>
using namespace std;

# define rep(i, n) for(int(i)=0;(i)<(n);(i)++)
# define reps(i, n) for(int(i)=1;(i)<=(n);(i)++)
# define rrep(i, n) for(int i=((int)(n)); i>0; --i)
# define rreps(i, n) for(int i=((int)(n)); i>=0; --i)
# define ALL(v) v.begin(), v.end()
template<class T>inline bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T>inline bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
template<typename T> void dump(T e){std::cout << e << std::endl;}
template<typename T> void dump(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void dump(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ dump(v); } }
template <typename T>
void dump_stack(std::stack<T>& stack) {
  std::stack<T> temp;
  while (!stack.empty()) {
    T top = stack.top(); stack.pop();
    std::cout << top << " ";
    temp.push(top);
  }
  std::cout << endl;
  while (!temp.empty()) {
    T top = temp.top(); temp.pop();
    stack.push(top);
  }
}
template <typename T>
void dump_queue(std::queue<T>& queue) {
  std::queue<T> temp;
  while (!queue.empty()) {
    T top = queue.front(); queue.pop();
    std::cout << top << " ";
    temp.push(top);
  }
  std::cout << endl;
  while (!temp.empty()) {
    T top = temp.front(); temp.pop();
    queue.push(top);
  }
}

typedef long long ll;




int main(){
  stack <int> sk;
  stack< pair<int , int> > sk2;
  //int imos1[200001],imos2[200001],ans,sum,SUM;
  //dump(imos1[1]);
  string s; cin >> s;
  int sum=0;
  rep(i,s.length()){
    if(s[i]=='\\')sk.push(i);
    if(s[i]=='/'){
      if(sk.empty())continue;
      int x=sk.top();sk.pop();// \の位置
      //dump(i);
      //dump(x);
      //exit(0);
      sum += i-x;
      int a = i-x; // 今入力された/から対応する\までの距離＝面積
      //dump(x);
      // 今新しくできた水たまりが過去の水たまりを包含している場合、以下のwhileループで再計算する
      while(sk2.size() > 0 && sk2.top().first > x) {
        a += sk2.top().second; 
        sk2.pop(); // 包含された水たまりの面積を今の水たまりに加え、スタックS2から削除
      }
      //dump(a);
      //dump("===");
      sk2.push(make_pair(x,a));
    }
  }
  vector<int> ans;
  while(sk2.size() > 0){
    ans.push_back(sk2.top().second);
    sk2.pop();
  }
  reverse(ans.begin(),ans.end());
  cout << sum << endl;
  cout << ans.size();
  rep(i,ans.size()) {
    cout << " " << ans[i];
  }
  cout << endl;
}

