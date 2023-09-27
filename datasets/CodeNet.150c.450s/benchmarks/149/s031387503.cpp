#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<map>
#include<stdexcept>

template<typename T>
class union_find{
	std::map<T, T> parent;
	std::map<T, T> rank;
public:
	void add(const T& t){ parent[t] = t; rank[t] = 0; }
	const T& find(T t)const{
		while (true){
			typename std::map<T, T>::const_iterator it = parent.lower_bound(t);
			/*if(it != parent.end() && it->first == t)*/if (t != it->second)t = it->second;
			else return it->second;
			//throw std::runtime_error("union_find not found");
		}
	}
	void unite(T l, T r){
		l = find(l);
		r = find(r);
		if (l == r)return;
		if (rank[l] < rank[r])
			parent[l] = r;
		else{
			parent[r] = l;
			if (rank[l] == rank[r])++rank[l];
		}
	}
	bool is_same(const T& l, const T& r)const{
		return find(l) == find(r);
	}
};



int n, q;
union_find<int> U;

int main(){
	scanf("%d %d", &n, &q);
	for (int i = 0; i < n; ++i)U.add(i);
	for (int i = 0; i < q; ++i){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0){
			U.unite(b, c);
		}
		else {
			//if (U.is_same(b, c))printf("1\n");
			//else printf("0\n");
			printf("%d\n", int(U.is_same(b, c)));
		}
	}
	return 0;
}