#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> flags;
typedef class unionfindtree{
private:
	std::vector<int> par,rank;
public:
	void init(int n){
		for(int i=0;i<n;i++){
			par.push_back(i);
			rank.push_back(0);
		}
	}
	int find(int x){
		if(par[x]==x) return x;
		return par[x]=find(par[x]);
	}
	bool same(int x,int y){
		if(find(x)==find(y)) return true;
		else return false;
	}
	void uni(int x,int y){
		x=find(x);
		y=find(y);
		if(rank[x]>=rank[y]){
			par[y]=x;
			rank[x]=rank[x]+1;
		}else if(rank[x]<rank[y]){
			par[x]=y;
			rank[y]=rank[y]+1;
		}
	}
}UFT;
struct input_data{
	int id1;
	int id2;
	bool operator<(const input_data& rhs)const{
		if(min(id1,id2)<min(rhs.id1,rhs.id2)) return true;
		if(min(id1,id2)==min(rhs.id1,rhs.id2) && max(id1,id2)<max(rhs.id1,rhs.id2)) return true;
		return false;
	}
};
vector<input_data> d;
UFT uft;
void input(int m){
  for(int i=0;i<m;i++){
    int id1,id2;
    cin>>id1>>id2;
  	input_data ind={id1,id2};
  	d.push_back(ind);
  }
	stable_sort(d.begin(),d.end());
}

void reuni(int n){
	for(input_data ind:d){
		if(!uft.same(ind.id1,ind.id2)){
			uft.uni(ind.id1,ind.id2);
		}
	}
}

void cc(int q){
  for(int i=0;i<q;i++){
	  int id1,id2;
  		cin>>id1>>id2;
  		if(uft.same(id1,id2)) flags.push_back(1);
  	else flags.push_back(0);
  }
}
int main(){
  int n,m;
  cin>>n>>m;
  input(m);
	uft.init(n);
	reuni(n);
	int q;
	cin>>q;
	cc(q);
	for(int f:flags){
		if(f) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}

