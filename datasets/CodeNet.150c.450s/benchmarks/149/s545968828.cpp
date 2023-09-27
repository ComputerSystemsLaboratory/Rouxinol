#include<cstdint>
#include<vector>
#include<utility>
template<typename T>
class basic_union_find{
	std::vector<T> data;
public:
	basic_union_find(std::size_t s) :data(s, -1){}
	T find(T t){ return data[t] < 0 ? t : data[t] = find(data[t]); }
	T find(T t)const{ return data[t] < 0 ? t : find(data[t]); }
	void unite(T t, T s){
		t = find(t);
		s = find(s);
		if (t == s)return;
		if (data[t] > data[s])std::swap(t, s);
		data[t] += data[s];
		data[s] = t;
	}
	bool is_same(T t, T s){ return find(t) == find(s); }
	bool is_same(T t, T s)const{ return find(t) == find(s); }
};

typedef basic_union_find<std::int32_t> union_find;



#include<cstdio>

int n, q;

int main(){
	scanf("%d %d", &n, &q);
	union_find U(n);
	for (int i = 0; i < q; ++i){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0)
			U.unite(b, c);
		else 
			printf("%d\n", int(U.is_same(b, c)));
	}
	return 0;
}