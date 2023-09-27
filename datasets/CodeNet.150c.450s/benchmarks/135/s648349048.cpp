#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const* argv[])
{
	while(1){
		int n,m;
		cin>>n>>m;
		vector<int> hmap,wmap;
		vector<int> map;
		if(!n||!m) return 0;

		int o=0;
		for(int i=0;i<n;i++){
			int h;
			cin>>h;
			hmap.push_back(o);
			o+=h;
		}
		hmap.push_back(o);
		o=0;
		for(int i=0;i<m;i++){
			int w;
			cin>>w;
			wmap.push_back(o);
			o+=w;
		}
		wmap.push_back(o);

		int cnt=0;
		map.resize(max(hmap[n],wmap[m])+10);
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n+1;j++){
				map[hmap[j]-hmap[i]]++;
			}
		}
		for(int i=0;i<m;i++){
			for(int j=i+1;j<m+1;j++){
				int it=wmap[j]-wmap[i];
				if(map[it]>0) cnt+=map[it];
			}
		}
		
		cout<<cnt<<endl;
	}
	return 0;
}