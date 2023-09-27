#include <iostream>
#include <vector>
#include <string>
using namespace std;

int explorer(vector<string> *map,int i, int j){
	if(map->at(i)[j]=='#') return 0;
	
	int cnt=1;
	vector<int>vi;
    vi.reserve(4);
	vector<int>vj;
    vj.reserve(4);
	
	map->at(i)[j]='#';
	
	if(i!=0&&map->at(i-1)[j]=='.'){
		vi.push_back(i-1);
		vj.push_back(j);
	}if(i+1!=map->size()&&map->at(i+1)[j]=='.'){
		vi.push_back(i+1);
		vj.push_back(j);		
	}if(j!=0&&map->at(i)[j-1]=='.'){
		vi.push_back(i);
		vj.push_back(j-1);		
	}if(j+1!=map->at(i).size()&&map->at(i)[j+1]=='.'){
		vi.push_back(i);
		vj.push_back(j+1);		
	}

	while(!vi.empty()){
		cnt += explorer(map,vi.back(),vj.back());
		vi.pop_back();
		vj.pop_back();
	}

	return cnt;
}

int main() {
	int w,h;
	
	while(cin >> w >> h,w){
	vector<string> map;
	int psx=0,psy=0;
	map.resize(h);
	for(int i=0;i<h;i++){
		cin >> map[i];
		
		if(psx==0){
			if(map[i].find('@')!=-1){
				psx=map[i].find('@');
				psy=i;
			}
		}
	}
	
	cout << explorer(&map,psy,psx) << endl;
	}
	return 0;
}