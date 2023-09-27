#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(n) begin(n), end(n)
using ll = long long;
using namespace std;

const int INF = 2001001001;

void insert(vector<int> &pq, int in){
  pq.push_back(in);
  int now = pq.size() - 1;
  while(0 < now){
    int par = (now-1)/2;
    if(pq.at(par) < pq.at(now)){
      swap(pq.at(par), pq.at(now));
      now = par;
    }else break;
  }
}

int del(vector<int> &pq){
  int ret = pq.front();
  int now = 0;
  // rep(i, pq.size()){
  //   cerr << pq.at(i) << " ";
  // }
  // cerr << endl;
  pq.front() = pq.back();
  if(pq.size() == 1) return ret;
  pq.pop_back();
  while((now+1)*2-1 < pq.size()){
    int nn = pq.at(now);
    int l = (now+1)*2-1, r = (now+1)*2;
    int ll = pq.at(l), rr;
    if(pq.size() == r) rr = -INF;
    else rr = pq.at(r);
    // cerr << nn << " " << ll << " " << rr << endl;
    if(nn < rr && nn < ll){
      if(ll > rr){
        swap(pq.at(l), pq.at(now));
        now = l;
      }else{
        swap(pq.at(r), pq.at(now));
        now = r;
      }
    }else if(nn < rr){
      swap(pq.at(r), pq.at(now));
      now = r;
    }else if(nn < ll){
      swap(pq.at(l), pq.at(now));
      now = l;
    }else break;
  }
  // rep(i, pq.size()){
  //   cerr << pq.at(i) << " ";
  // }
  // cerr << endl;
  return ret;
}

int main(){
  vector<int> pq;
  while(1){
    string s;
    cin >> s;
    if(s == "end") break;
    else if(s == "insert"){
      int in;
      cin >> in;
      insert(pq, in);
    }else{
      printf("%d\n", del(pq));
    }
  }
  return 0;
}
