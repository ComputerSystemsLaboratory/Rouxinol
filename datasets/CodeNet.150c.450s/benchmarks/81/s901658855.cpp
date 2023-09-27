#include<iostream>
#include<vector>
using namespace std;
#define FOR(i,a) for(int i=0;i<(int)(a);i++)
#define pb push_back
#define clr clear()
#define sz size()
typedef unsigned int ui;

class node{
public:
  int num;
  void set(int n){num = n;}
  bool equal(int a){
    return num == a;
  }
};

class edge{
public:
  node b,e;
  int cost;

  void set(int s,int g,int c){
    b.set(s);
    e.set(g);
    cost = c;
  }
};

class graph{
public:
  vector<node> n;
  vector<edge> e;

  void set(void){
    n.clr;
    e.clr;
  }

  bool Nexist(node a){
    FOR(i,n.sz){
      if(a.num == n[i].num)return true;
    }
    return false;
  }

  int Eexist(int a,int b){
    for(ui i=0;i<e.sz;i++){
      if(e[i].b.equal(a) && e[i].e.equal(b))return i;
      if(e[i].b.equal(b) && e[i].e.equal(a))return i;
    }
    return -1;
  }

  void Nadd(node a){
    if(!n.sz)n.pb(a);
    else if(!Nexist(a)){
      ui i = 0;
      while(n[i].num < a.num && i<n.sz)i++;
      n.insert(n.begin()+i,a);
    }
  }

  void Eadd(edge a){
    if(!e.sz)e.pb(a);
    else{
      ui i = 0;
      while(e[i].cost < a.cost && i<e.sz)i++;
      e.insert(e.begin()+i,a);
    }
    Nadd(a.b);
    Nadd(a.e);
  }

  graph prim(void){
    graph res;

    res.set();

    if(!e.sz)return res;
    else{
      res.Eadd(e[0]);
      res.Nadd(e[0].b);
      res.Nadd(e[0].e);

      while(res.n.sz < n.sz){
	FOR(i,e.sz){
	  if(res.Nexist(e[i].b) && !res.Nexist(e[i].e)){
	    res.Eadd(e[i]);
	    res.Nadd(e[i].e);
	    i = 0;
	  }else if(!res.Nexist(e[i].b) && res.Nexist(e[i].e) ){
	    res.Eadd(e[i]);
	    res.Nadd(e[i].b);
	    i = 0;
	  }
	}
      }
      return res;
    }
  }

  vector<int> warshall_floyd(void){
    vector<int> at;
    int tmp;
    for(ui i=0;i<n.sz;i++){
      for(ui j=0;j<n.sz;j++){
	if(i==j)at.pb(0);
	else{
	  tmp = Eexist(i,j);
	  if(tmp>=0)at.pb(e[tmp].cost);
	  else at.pb(-1);
	}
      }
    }
    for(ui k=0;k<n.sz;k++){
      for(ui i=0;i<n.sz;i++){
	for(ui j=0;j<n.sz;j++){
	  if(at[i*n.sz+k] >= 0 && at[k*n.sz+j] >= 0){
	    if(at[i*n.sz+k] + at[k*n.sz+j] < at[i*n.sz+j] || at[i*n.sz+j]<0){
	      at[i*n.sz+j] = at[i*n.sz+k] + at[k*n.sz+j];
	      at[j*n.sz+i] = at[i*n.sz+k] + at[k*n.sz+j];
	    }
	  }
	}
      }
    }
    return at;
  }
};

int main(){
  int n;
  int a,b,c;
  vector<int> at;
  graph wf;
  edge tmp;
  int cost,max,minn;
  int min;

  while(1){
    cin >> n;
    if(!n)break;

    max = 0;
    wf.set();
    at.clear();
    for(int k=0;k<n;k++){
      cin >> a >> b >> c;
      if(max < a)max = a;
      if(max < b)max = b;
      tmp.set(a,b,c);
      wf.Eadd(tmp);
    }

    at = wf.warshall_floyd();
    
    max++;

    min = 2000000000;
    for(int i=0;i<max;i++){
      cost = 0;
      for(int j=0;j<max;j++)cost += at[i*max+j];
      if(min > cost){
	min = cost;
	minn = i;
      }
    }
    cout << minn << " " << min << endl;
  }
}