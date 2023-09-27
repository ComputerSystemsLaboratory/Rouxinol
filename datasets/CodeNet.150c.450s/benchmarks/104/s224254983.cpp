//C++14 (Clang 3.8.0)

#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <climits>
#include <sstream>

using namespace std;
typedef pair<int,int> P;
vector<string> split(const string &s, char delim) {
    vector<string> elems;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
    if (!item.empty()) {
            elems.push_back(item);
        }
    }
    return elems;
}

int main(){
  int w,n;
  cin>>w;
  cin>>n;
  int ami[40];
  P bou[40];
  for(int i=0;i<n;i++){
    int x=0,y=0;
    scanf("%d,%d",&x,&y);
    bou[i]=P(x,y);
  }
  for (int i=0;i<w;i++){
    int start=i+1;
    for(int j=0;j<n;j++){
      if(bou[j].first==start){start=bou[j].second;}
      else if(bou[j].second==start){start=bou[j].first;}
    }
    ami[start]=i+1;
  }
  for(int i=1;i<=w;i++)cout<<ami[i]<<endl;






}

