#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
 
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;
 
using namespace std;

int main(){

  while(true){

    int a;
    cin >> a;

    vector<int> list;

    if(a==0){
      break;
    }

    rep(i,a){
      int temp=0;
      cin >> temp;
      list.push_back(temp); 
    }

    sort(list.begin(),list.end());

    int ans=0;
    int count=0;
    REP(i,1,a-1){
      ans+=list[i];
      count++;
    }
    ans=(int)(ans/count);
    cout << ans << endl;
  }
  return 0;
}