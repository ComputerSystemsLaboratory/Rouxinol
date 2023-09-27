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
using namespace std;

const double pi=4*atan(1.0);
using cWeightEdges=std::vector<std::vector<std::pair<int,int>>>;

template<typename T>
struct cIndexedVertex{
	T index;
	int key;
	int parent;
	cIndexedVertex(T index_,int key_,int parent_)
		:index(index_)
		,key(key_)
		,parent(parent_){
	}
	cIndexedVertex():cIndexedVertex(-1,INT_MAX,-1){}
};

class priority_queue_with_decrease_key_by_heap{
private:
	vector<cIndexedVertex<int>> Heap;
	//Heap[HeapPlace[vertex index]].index = vertex index??????????????????????????????????¬???????vertex????????±?????\??£?????????????????\??£?????????
	vector<int> HeapPlace;
private:
	inline int parent(int i)const{ return i%2==0 ? i/2-1 : i/2; }
	inline int left(int i)const{ return 2*i+1; }
	inline int right(int i)const{ return 2*(i+1); }
	void heap_ify(int i){
		if(i<0 || i>Heap.size()-1)return;

		//i???????????¨??????????????????????????§????°?????????????????????????????????¨?????¨??????????????????
		int l(left(i)),r(right(i)),smallest;
		if(l<Heap.size() && Heap[l].key<Heap[i].key){
			smallest=l;
		}
		else smallest=i;

		if(r<Heap.size() && Heap[r].key<Heap[smallest].key){
			smallest=r;
		}

		//????????????????????????????????£????????°
		if(smallest!=i){
			swap(HeapPlace[Heap[i].index],HeapPlace[Heap[smallest].index]);
			swap(Heap[i],Heap[smallest]);
			heap_ify(smallest);
		}
	}
	inline void build_heap(){
		//??????????????????????????????????????????
		for(int i=parent(Heap.size()-1);i>=0;--i){
			heap_ify(i);
		}
	}
private:
	inline int getHeapPlace(size_t vertex)const{ return vertex>=HeapPlace.size() ? -1 : HeapPlace[vertex]; }
public:
	inline bool empty()const{ return Heap.empty(); }
	inline auto front()const{
		if(Heap.empty())return cIndexedVertex<int>();
		return Heap.front();
	}
	inline void pop(){
		if(Heap.empty())return;

		//?????????????????????????±???????????????¨???????°??????????????????????????????????
		HeapPlace[Heap.back().index]=HeapPlace[Heap.front().index];
		//???????????????????????????????????§?¶????
		HeapPlace[Heap.front().index]=-1;

		swap(Heap.front(),Heap.back());
		Heap.pop_back();

		//?????????????????£??????????????????????????£?????????????????????
		heap_ify(0);
	}
	inline auto front_and_pop(){
		auto ans=front();
		pop();
		return ans;
	}
	inline void decrease_key(int key,int VertexIndex){
		if(VertexIndex<0 || VertexIndex>=HeapPlace.size())return;
		int i=HeapPlace[VertexIndex];

		if(key>Heap[i].key)return;

		Heap[i].key=key;
		//?????£??????????????§???????????????
		while(i>0 && Heap[parent(i)].key>Heap[i].key){
			swap(HeapPlace[Heap[i].index],HeapPlace[Heap[parent(i)].index]);
			swap(Heap[parent(i)],Heap[i]);
			i=parent(i);
		}
	}
	inline bool is_heap_in(size_t vertex)const{ return vertex>=HeapPlace.size() ? false : (HeapPlace[vertex]<0 ? false : true); }
	inline int get_key(size_t vertex)const{ return vertex>=HeapPlace.size() ? INT_MAX : Heap[HeapPlace[vertex]].key; }
	inline void set_parent(size_t vertex,int parent){ if(vertex<HeapPlace.size() && HeapPlace[vertex]>=0)Heap[HeapPlace[vertex]].parent=parent; }
public:
	inline void reset(size_t size,size_t root){
		if(size==0){
			Heap.clear();
			HeapPlace.clear();
			return;
		}
		if(root>size-1)root=0;

		Heap=vector<cIndexedVertex<int>>(size);
		for(int i=0;i<Heap.size();++i){
			Heap[i].index=i;
			Heap[i].key=(i==root ? 0 : INT_MAX);
			Heap[i].parent=-1;
		}
		HeapPlace.reserve(size);
		for(int i=0;i<Heap.size();++i){
			HeapPlace.push_back(i);
		}
	}
	inline size_t get_vertex_num()const{ return HeapPlace.size(); }
public:
	priority_queue_with_decrease_key_by_heap(size_t size,size_t root){
		reset(size,root);
	}
public:
	inline auto Heap_cbegin()const{ return Heap.cbegin(); }
	inline auto Heap_cend()const{ return Heap.cend(); }
	inline auto HeapPlace_cbegin()const{ return HeapPlace.cbegin(); }
	inline auto HeapPlace_cend()const{ return HeapPlace.cend(); }
};

vector<pair<int,int>> solve_by_Prim(const cWeightEdges& Edges,int root){
	if(Edges.empty())return vector<pair<int,int>>();

	vector<cIndexedVertex<int>> arr;
	arr.reserve(Edges.size());

	priority_queue_with_decrease_key_by_heap Q(Edges.size(),root);
	while(!Q.empty()){
		auto now=Q.front();
		arr.push_back(now);

		Q.pop();
		for(const auto& val:Edges[now.index]){
			if(Q.is_heap_in(val.first) && val.second<Q.get_key(val.first)){
				Q.set_parent(val.first,now.index);
				Q.decrease_key(val.second,val.first);
			}
		}
	}

	vector<pair<int,int>> ans;
	ans.reserve(Edges.size());
	for(const auto& val:arr){
		if(val.parent>=0){
			ans.push_back(make_pair(val.parent,val.index));
		}
	}

	return ans;
}

int main() {
	int N;
	cin>>N;
	cWeightEdges Edges(N);
	for(int i=0;i<N;++i){
		for(int j=0;j<N;++j){
			int w;
			cin>>w;
			if(w>=0){
				Edges[i].push_back(make_pair(j,w));
				Edges[j].push_back(make_pair(i,w));
			}
		}
	}

	auto ans=solve_by_Prim(Edges,0);
	int sum=0;
	for(const auto& val:ans){
		for(const auto& val1:Edges[val.first]){
			if(val1.first==val.second){
				sum+=val1.second;
				break;
			}
		}
	}
	cout<<sum<<endl;
//	system("pause");
	return 0;
}