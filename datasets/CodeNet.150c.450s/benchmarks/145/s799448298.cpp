#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <set>
#include <map>

using namespace std;
typedef long long LL;
static const double EPS = 1e-9;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n) 

int main(void){
  vector<int> count;
  vector<string> word;
  string tmp;
  while(cin>>tmp){
    if(find(word.begin(),word.end(),tmp) != word.end()){
      int d = distance(word.begin(), find(word.begin(),word.end(),tmp));
      count[d]++;
    }else{
      word.push_back(tmp);
      count.push_back(1);
    }
  }
  int maxn = 0,maxl = 0, mni, mli;
  
  REP(i,count.size()){
    if(count[i] > maxn) {
      maxn = count[i];
      mni = i;
    }
    if(word[i].size() > maxl){
      maxl = word[i].size();
      mli = i;
    }
  }
  cout << word[mni] << " " << word[mli] << endl;
  return 0;
}