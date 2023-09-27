#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Edge{
  int weight;
  int from;
  int to;
  Edge(int w,int f,int t):weight(w),from(f),to(t){}
};

const int inf = 1<<28;

bool operator<(Edge e1,Edge e2){
  return (e1.weight < e2.weight);
}

int nlist[110];

int parent(int i){
  if(nlist[i] == i) return i;
  else return (nlist[i] = parent(nlist[i]));
}

int main(){
  int n;
  cin>>n;
  vector<Edge> Elist;
  for(int i=0;i<n;i++) nlist[i]=i;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      int temp;
      cin>>temp;
      if(temp != -1){
	Elist.push_back(Edge(temp,i,j));
      }
    }
  }
  sort(Elist.begin(),Elist.end());
  int ans = 0;
  for(int i=0;i<Elist.size();i++){
    Edge e = Elist[i];
    int fp = parent(e.from);
    int tp = parent(e.to);
    if(fp != tp){
      ans += e.weight;
      nlist[fp] = tp;
    }
  }
  cout<<ans<<endl;
  return 0;
}