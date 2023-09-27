#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

typedef struct  {
	int w, h, size;
}graph;

vector<graph> g;
bool compare(graph a, graph b){
	if(a.size < b. size){
		return true;
	} else{
		if(a.size == b.size && a.h < b.h){
			return true;
		}
	}
	return false;
}

int main(int argc, char const* argv[])
{
	int h, w;
	
	for(int i = 1; i < 151; i++){
		for(int j = i+1; j < 151; j++){
			graph a;
			a.h = i;
			a.w = j;
			a.size = i * i + j * j;
			g.push_back(a);
		}
	}
	
	sort(g.begin(), g.end(), compare);
	
	
	while(true){
		cin >> h >> w;
		if(!(h&&w))break;
		
		rep(i, g.size()){
			if(g[i].h == h && g[i].w == w){
				cout << g[i+1].h << ' ' << g[i+1].w << endl;
				break;
			}
		}
	}
	return 0;
}