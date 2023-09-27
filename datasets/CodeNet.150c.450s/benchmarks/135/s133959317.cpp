#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#define N1 1501
#define N2 1000
using namespace std;
int hcnt[N1*N2],wcnt[N1*N2];
int main(){
  int N,M,h[N1],w[N1];
  vector<int> H,W;
  set<int> S;
  while(1){
    cin >> N >> M;
    if(N==0&&M==0) break;
    for(int i=0;i<N;i++){
      cin >> h[i];
      if(i>0) h[i]+=h[i-1];
      H.push_back(h[i]);
    }
    for(int i=0;i<M;i++){
      cin >> w[i];
      if(i>0) w[i]+=w[i-1];
      W.push_back(w[i]);
    }
    int l=1;
    while(l!=N+1){
      for(int i=l;i<N;i++){
	H.push_back(h[i]-h[i-l]);
      }
      l++;
    }
    l=1;
    while(l!=M+1){
      for(int i=l;i<M;i++){
	W.push_back(w[i]-w[i-l]);
      }
      l++;
    }
    sort(H.begin(),H.end());
    sort(W.begin(),W.end());
    for(int i=0;i<N1*N2;i++) hcnt[i]=wcnt[i]=0;
    for(int i=0;i<H.size();i++){
      S.insert(H[i]);
      hcnt[H[i]]++;
    }
    int k=0;
    for(set<int>::iterator it=S.begin();it!=S.end();it++){
      for(int i=k;i<W.size();i++){
	if((*it)==W[i]){
	  wcnt[(*it)]++;
	}else if((*it)<W[i]){
	  k=i;
	  break;
	}
      }
    }
    int sum=0;
    for(set<int>::iterator it=S.begin();it!=S.end();it++){
      if(hcnt[(*it)]!=0&&wcnt[(*it)]!=0) sum+=hcnt[(*it)]*wcnt[(*it)];
    }
    cout << sum << endl;
    H.clear();
    W.clear();
    S.clear();
  }
  return 0;
}