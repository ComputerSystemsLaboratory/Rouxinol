#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> adjlist;
int t=0;
vector<int> d;
vector<int> f;
void input(int n){
	vector<int> f={0,0};
	adjlist.push_back(f);
  for(int i=0;i<n;i++){
    vector<int> list;
    int ln;
    cin>>ln;
    list.push_back(ln);
    cin>>ln;
    list.push_back(ln);
    for(int j=0;j<ln;j++){
      int an;
      cin>>an;
      list.push_back(an);
    }
    adjlist.push_back(list);
  }
}

void depth_search(int id){
	vector<int> list=adjlist[id];
	for(int j=0;j<list[1];j++){
		if(d[list[2+j]]<0){
			d[list[2+j]]=++t;
			depth_search(list[2+j]);
		}
	}
	f[id]=++t;
}
 
void print(int n){
  for(int i=1;i<n+1;i++){
    cout<<i<<' '<<d[i]<<' '<<f[i]<<endl;
  }
}
int main(){
  int n;
  cin>>n;
	d=vector<int> (n+1,-1);
	f=vector<int> (n+1,-1);
  input(n);
	for(int i=1;i<n+1;i++){
		if(f[i]<0){
			d[i]=++t;
			f[i]=t;
			depth_search(i);
		}
	}
  print(n);
  return 0;
}
