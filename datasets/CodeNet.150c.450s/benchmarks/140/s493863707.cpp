#include<iostream>
#include<vector>
#include<string>
#include<array>
#include<algorithm>
#include<list>
#include<cmath>
#include<iomanip>
#include<queue>
#include<functional>
#include<climits>
#include<iterator>
#include<unordered_map>

using namespace std;
using cWeightEdges=std::vector<std::vector<std::pair<int,int>>>;
template<typename T>
class cUnionFind{
private:
	struct cNode{
		T data;
		size_t parent;
		size_t rank;
		cNode(T data_,size_t parent_,size_t rank_)
			:data(data_),parent(parent_),rank(rank_){}
	};
private:
	std::vector<cNode> Buf;
	std::unordered_map<T,size_t> Hash;
public:
	cUnionFind(){}
private:
	bool link(T x_,T y_){
		auto x_itr=Hash.find(x_);
		auto y_itr=Hash.find(y_);

		if(x_itr==Hash.end() || y_itr==Hash.end())return true;

		size_t x_index=x_itr->second;
		size_t y_index=y_itr->second;

		if(Buf[x_index].rank>Buf[y_index].rank){
			Buf[y_index].parent=x_index;
		}
		else{
			Buf[x_index].parent=y_index;
			if(Buf[x_index].rank==Buf[y_index].rank){
				++Buf[y_index].rank;
			}
		}

		return false;
	}
	size_t find_set_helper(size_t index_){
		if(index_!=Buf[index_].parent){
			size_t ans_index=find_set_helper(Buf[index_].parent);
			Buf[index_].parent=ans_index;
		}

		return Buf[index_].parent;
	}
public:
	bool make_set(T data_){
		size_t index=Buf.size();
		Buf.emplace_back(cNode(data_,index,0));
		auto ans=Hash.insert(std::make_pair(data_,index));
		return !ans.second;
	}
	std::pair<T,bool> find_set(T x_){
		auto x_itr=Hash.find(x_);
		if(x_itr==Hash.end())return std::make_pair(x_,true);

		size_t index=x_itr->second;
		if(Buf[index].parent!=index){
			Buf[index].parent=find_set_helper(Buf[index].parent);
		}

		return std::make_pair(Buf[Buf[index].parent].data,false);
	}
	bool union_set(T x_,T y_){
		return link(find_set(x_).first,find_set(y_).first);
	}
};

//int?????????????????????UnionFind????????§???????????\????????£?????????????????§?????¬???????????????????????????????????????????????§make_set?????????????????????
template<>
class cUnionFind<int>{
private:
	struct cNode{
		int parent;
		int rank;
	};
private:
	std::vector<cNode> Buf;
public:
	explicit cUnionFind(size_t size_)
		:Buf(size_){
		//make_set?????????
		for(int i=0;i<Buf.size();++i){
			Buf[i].parent=i;
			Buf[i].rank=0;
		}
	}
private:
	bool link(int x_,int y_){
		if(x_<0 || Buf.size()-1<x_ || y_<0 || Buf.size()-1<y_)return true;

		if(Buf[x_].rank>Buf[y_].rank){
			Buf[y_].parent=x_;
		}
		else{
			Buf[x_].parent=y_;
			if(Buf[x_].rank==Buf[y_].rank){
				++Buf[y_].rank;
			}
		}

		return false;
	}
public:
	std::pair<int,bool> find_set(int x_){
		if(Buf[x_].parent!=x_){
			auto ans_pair=find_set(Buf[x_].parent);
			Buf[x_].parent=ans_pair.first;
		}

		return std::make_pair(Buf[x_].parent,false);
	}
	bool union_set(int x_,int y_){
		return link(find_set(x_).first,find_set(y_).first);
	}
};

vector<pair<int,int>> solve_by_Kruskal(const cWeightEdges& Edges,int root=0){
	if(Edges.empty() || root<0 || Edges.size()-1<root)return vector<pair<int,int>>();

	vector<pair<int,int>> ans;
	ans.reserve(Edges.size());
	cUnionFind<int> UnionFind(Edges.size());

	int num=0;
	for(const auto& edges:Edges){
		num+=edges.size();
	}

	//int(vertex 1),int(vertex 2),int(weight)
	vector<array<int,3>> WeightEdges;
	WeightEdges.reserve(num);
	for(int i=0;i<Edges.size();++i){
		for(const auto& val:Edges[i]){
			//?????????????????????
			if(val.first>i){
				WeightEdges.push_back({i,val.first,val.second});
			}
		}
	}

	sort(begin(WeightEdges),end(WeightEdges),[](array<int,3> x,array<int,3> y)->bool{return x[2]<y[2];});
	for(const auto& edge:WeightEdges){
		if(UnionFind.find_set(edge[0]).first!=UnionFind.find_set(edge[1]).first){
			ans.emplace_back(make_pair(edge[0],edge[1]));
			UnionFind.union_set(edge[0],edge[1]);
		}
	}
	return ans;
}

const double pi=4*atan(1.0);

int mod=1000000007;

int main() {
	int N,M;
	cin>>N>>M;

	cWeightEdges Edges(N);
	for(int i=0;i<M;++i){
		int u,v,w;
		cin>>u>>v>>w;
		Edges[u].emplace_back(make_pair(v,w));
		Edges[v].emplace_back(make_pair(u,w));
	}

	auto ans=solve_by_Kruskal(Edges);

	int sum=0;
	for(const auto& val:ans){
		for(const auto& edge:Edges[val.first]){
			if(edge.first==val.second){
				sum+=edge.second;
				break;
			}
		}
	}

	cout<<sum<<endl;
	
	//system("pause");
	return 0;
}