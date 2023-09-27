#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
vector<pair<int,int> > v[2];
int main(void){
  int res;
  int n,f;
  while(cin >> n && n){
    f = res = 0;
    v[0].clear();
    for(int i = 0; i < n; i++){
      int a,b,c,d;
      scanf("%d:%d:%d",&a,&b,&c);
      d = a*3600 + b*60 + c;
      scanf("%d:%d:%d",&a,&b,&c);
      c = a*3600 + b*60 + c;
      v[0].push_back(make_pair(d,c));
    }

    sort(v[0].begin(),v[0].end());

    while((int)v[f].size()){
      res++;
      int b = v[f][0].second;
      v[(f+1)%2].clear();
      for(int i = 1; i < (int)v[f].size(); i++){
	if(v[f][i].first < b){
	  v[(f+1)%2].push_back(v[f][i]);
	}else{
	  b = v[f][i].second;
	}
      }
      f = (f+1)%2;
    }
    cout << res << endl;
  }
}