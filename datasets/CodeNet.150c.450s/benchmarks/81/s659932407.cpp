#include<iostream>
using namespace std;
#define V 10
#define INF (1<<30)-1
struct edge{int from,to,cost;};
int main(){
  int d[V];
  int n;
  while(cin>>n){
    if(n==0) break;
    edge es[2*n];
    int a,b,c;
    int ans = INF,ansi;
    for(int i=0;i<2*n;i+=2){
      cin >> a >> b >> c;
      es[i].from = es[i+1].to = a;
      es[i+1].from = es[i].to = b;
      es[i].cost = es[i+1].cost = c;
    }
    for(int j=0;j<V;j++){
      for(int i=0;i<V;i++) d[i] = INF; 
      d[j] = 0;
      while(true){
	bool updata = false;
	for(int i=0;i<2*n;i++){
	  edge e = es[i];
	  if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost){
	    d[e.to] = d[e.from] + e.cost;
	    updata = true;
	  }
	}
	if(!updata) break;
      }    
      int s = 0;
      for(int i=0;i<V;i++){
	if(d[i]!=INF){
	  s += d[i];
	}
      }
      if(s<ans&&s!=0){ans = s,ansi =j;};
    }
    cout << ansi << ' ' << ans << endl;
  }
  return 0;
}
 