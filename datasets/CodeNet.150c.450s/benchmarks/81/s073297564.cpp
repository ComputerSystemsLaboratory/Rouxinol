#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip> 
#include <complex> 
#include <string>
#include <vector> 
#include <list>
#include <deque> 
#include <stack> 
#include <queue> 
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <utility>
#include <algorithm> 
#include <numeric> 
#include <typeinfo> 
#include <cstdio>
#include <cstdlib> 
#include <cstring>
#include <cmath>
#include <climits> 
#include <ctime> 

using namespace std;
const int INF=10000000;
int maps[11][11];
int f,t,h;

void root(){
	int a,b;
	if(maps[f][t]>h)maps[f][t]=h;
	if(maps[t][f]>h)maps[t][f]=h;
	for(b=0;b<=10;b++){
		for(a=0;a<=10;a++){
			maps[a][b]=min(maps[a][b],maps[a][f]+maps[f][t]+maps[t][b]);
			maps[b][a]=min(maps[b][a],maps[a][f]+maps[f][t]+maps[t][b]);
		}
	}
}

int main(void){
	int a,b;
	int n;
	int town[11];
	int ans=INF*10;
	int ans3=0;
	while(1){
		for(b=0;b<=10;b++){
			town[b]=0;
			for(a=0;a<=10;a++){
				maps[a][b]=INF;
				if(a==b)maps[a][b]=0;
			}
		}
		ans=INF*10;
		ans3=0;
		cin >> n;
		if(n==0)break;
		for(a=0;a<n;a++){
			cin >> f >> t >> h;
			town[f]=1;
			town[t]=1;
			root();
		}
		for(b=0;b<=10;b++){
			int ans2=0;
			if(town[b]==1){
				for(a=0;a<=10;a++){
					if(town[a]==1)ans2+=maps[a][b];
				}
				if(ans>ans2)ans3=b,ans=min(ans,ans2);
			}
		}
		cout << ans3 << ' ' << ans << endl;
	}
	return 0;
}