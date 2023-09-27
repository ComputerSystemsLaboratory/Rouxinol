#include <iostream>
#include <cstdlib>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int, int> P;

int main(){
  int h,w;
  while(cin>>h>>w,h){
    int diagonal = h*h + w*w;
    pair<P,int> p(make_pair(diagonal, h), w);
    vector<pair<P, int>> v;
    for(int i=1;i<=150;++i){
      for(int j=i+1;j<=150;++j){
        if(i>=j) break;
        if(i==h&&j==w) continue;
        if(diagonal <= i*i + j*j){
          v.emplace_back(make_pair( make_pair(i*i+j*j,i), j));
        }
      } 
    }

    sort(begin(v), end(v));

    for(int i=0;i<v.size();++i){
      if(p < v[i]){
        cout << v[i].first.second << " " << v[i].second << endl;
        break;
      }
    }

  }

  return EXIT_SUCCESS;
}