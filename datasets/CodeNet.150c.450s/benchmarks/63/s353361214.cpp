#include<iostream>
#include<vector>
#include<queue>

using namespace std;
  
#define NOT -1
#define VMAX 100000

int main(void){
	
	int V,E,r;
	int s,t,d;
	int v[VMAX];
	vector<int> ed[VMAX];
	vector<int> edco[VMAX];
	queue<int> no;

	cin>>V>>E>>r;

	for(int i=0;i<V;i++) v[i]=NOT;

	for(int i=0;i<E;i++){
		cin>>s>>t>>d;
		ed[s].push_back(t);
		edco[s].push_back(d);
	}

	no.push(r);
	v[r]=0;
	while(!no.empty()){
		for(int i=0;i<ed[no.front()].size();i++){
			if(v[no.front()]+edco[no.front()][i]<v[ed[no.front()][i]]||v[ed[no.front()][i]]==NOT){
				v[ed[no.front()][i]]=v[no.front()]+edco[no.front()][i];
				no.push(ed[no.front()][i]);
			}
		}
		no.pop();
	}

	for(int i=0;i<V;i++){
		if(v[i]!=NOT) cout<<v[i]<<endl;
		else cout<<"INF"<<endl;
	}
}