#include <string>
#include <vector>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
#include<functional>
#include<list>
#include<deque>
#include<bitset>
#include<set>
#include<map>
#include<unordered_map>
#include<cstring>
#include<sstream>
#include<complex>
#include<iomanip>
#include<numeric>

using namespace std;

int INF=1e8;
int dist[15][15];

int main(){
  ios_base::sync_with_stdio(false);
  cout<<fixed<<setprecision(0);
  int n;
  while(cin>>n,n){

    //??\????????£??\???????????¢?????????
    fill(dist[0],dist[0]+15*15,INF);
    int m=0,a,b,d;
    for(int i=0; i<n; ++i){
      cin>>a>>b>>d;
      dist[a][b]=dist[b][a]=min(dist[a][b],d);
      m=max({m,a,b});
    }
    ++m;

    for(int i=0; i<m; ++i)  //i??????i????????¢???0
      dist[i][i]=0;
    //???????????£???????????????
    for(int k=0; k<m; ++k)
      for(int i=0; i<m; ++i)
	for(int j=0; j<m; ++j)
	  dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);

    //(?????¢?????????,????????????)
    pair<int,int> re=pair<int,int>(INF,-1);
    for(int i=0; i<m; ++i){

      int sum=0; //??????????¨????
      for(int j=0; j<m; ++j) sum+=dist[i][j];

      //????°??????´??°
      re=min(re,pair<int,int>(sum,i));
    }
    cout<<re.second<<" "<<re.first<<endl;
  }
  return 0;
}