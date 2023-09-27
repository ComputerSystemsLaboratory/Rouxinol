#include <iostream>
#include <functional>
#include <vector>

class link_vector{
	std::vector<int> vec;
	std::vector<int> &ind;
public:
	link_vector(std::vector<int> &ind): ind(ind) {}
	void print(){
		for(int i : vec){
			std::cout << i << " ";
		}
		std::cout << std::endl;
		for(int i : ind){
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}
	void enlarge(){
		vec.push_back(int());
	}
	void reduce(){
		vec.pop_back();
	}
	void substitute(const int &i, const int &x){
		vec[i] = x;
		ind[x] = i;
	}
	int operator[](const int &i){
		return vec[i];
	}
	int size(){
		return vec.size();
	}
	int front(){
		return vec.front();
	}
	int back(){
		return vec.back();
	}
	bool empty(){
		return vec.empty();
	}
};

class heap{
	link_vector vec;
	std::function<bool(int, int)> fnc;
public:
	heap(std::vector<int> &ind, std::function<bool(int, int)> fnc): vec(ind), fnc(fnc) {}
	void push(int x){
		vec.enlarge();
		chmin(vec.size() - 1, x);
	}
	bool empty(){
		return vec.empty();
	}
	int top(){
		return vec.front();
	}
	void pop(){
		int x = vec.back();
		int i = 0;
		vec.reduce();
		for(;;){
			int j = i * 2 + 1;
			if(j + 1 < vec.size() && fnc(vec[j + 1], x) && fnc(vec[j + 1], vec[j])) ++j;
			else if(j >= vec.size() || fnc(x, vec[j])) break;
			vec.substitute(i, vec[j]);
			i = j;
		}
		vec.substitute(i, x);
	}
	void chmin(int i, int x){
		while(i != 0){
			int j = (i - 1) / 2;
			if(fnc(vec[j], x)) break;
			vec.substitute(i, vec[j]);
			i = j;
		}
		vec.substitute(i, x);
	}
	void print(){
		vec.print();
	}
};

struct edge{
	int to;
	int cost;
};

std::vector<int> dijkstra(std::vector<std::vector<edge>> e){
	std::vector<int> ret(e.size(), 0);
	std::vector<int> ind(e.size(), -1);
	std::vector<bool> fin(e.size(), false);

	heap h(ind, [&ret](int l, int r){ return ret[l] < ret[r]; });

	h.push(0);

	while(!h.empty()){
		int cur = h.top();
		h.pop();
		fin[cur] = true;
		for(edge i : e[cur]){
			if(!fin[i.to]){
				if(ind[i.to] == -1){
					ret[i.to] = ret[cur] + i.cost;
					h.push(i.to);
				}else if(ret[i.to] > ret[cur] + i.cost){
					ret[i.to] = ret[cur] + i.cost;
					h.chmin(ind[i.to], i.to);
				}
			}
		}
	}

	return ret;
}

int main(){
	int n;
	std::cin >> n;

	std::vector<std::vector<edge>> e(n);

	for(int i = 0; i < n - 1; ){
		std::cin >> i;
		int k;
		std::cin >> k;
		e[i].resize(k);
		for(int j = 0; j < k; ++j){
			std::cin >> e[i][j].to >> e[i][j].cost;
		}
	}

	std::vector<int> ans = dijkstra(e);

	for(int i = 0; i < n; ++i){
		std::cout << i << " " << ans[i] << std::endl;
	}
}

