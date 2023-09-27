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

template<typename T>
class cUnionFind{
private:
	struct cNode{
		T data;
		size_t parent;
		size_t rank;
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
			size_t ans_index=find_set_helper(index_);
			Buf[index_].parent=ans_index;
		}

		return Buf[index_].parent;
	}
public:
	bool make_set(T data_){
		size_t index=Buf.size();
		Buf.emplace_back({data_,index,0});
		auto ans=Hash.insert(std::make_pair(data_,index));
		return !ans.second;
	}
	bool union_set(T x_,T y_){
		return link(x_,y_);
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
};

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

using namespace std;

const double pi=4*atan(1.0);

int mod=1000000007;

int main() {
	int n,q;
	cin>>n>>q;
	cUnionFind<int> UnionFind(n);

	for(int i=0;i<q;++i){
		int query,x,y;
		cin>>query>>x>>y;

		if(query==0){
			UnionFind.union_set(x,y);
		}
		else{
			if(UnionFind.find_set(x)==UnionFind.find_set(y)){
				cout<<1<<endl;
			}
			else{
				cout<<0<<endl;
			}
		}
	}

	//system("pause");
	return 0;
}