#include<iostream>
#include<vector>
#include<queue>

using namespace std;
  
#define NOT -100000*2100
#define VMAX 100
#define EMAX 9900

int main(void){
	
	int V,E;
	int s,t,d;
	long long v[VMAX][VMAX];
	int cnt;
	vector<int> ed[VMAX];
	vector<int> edco[VMAX];
	queue<int> no;

	cin>>V>>E;

	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
		v[i][j]=NOT;
		}
	}
;
	for(int i=0;i<E;i++){
		cin>>s>>t>>d;
		ed[s].push_back(t);
		edco[s].push_back(d);
	}

	for(int r=0;r<V;r++){
		no.push(r);
		v[r][r]=0;
		cnt=0;
		while(!no.empty()){
			if(cnt>EMAX*10){
				cout<<"NEGATIVE CYCLE"<<endl;
				return 0;
			}
			for(int i=0;i<ed[no.front()].size();i++){
				if(v[r][no.front()]+edco[no.front()][i]<v[r][ed[no.front()][i]]||v[r][ed[no.front()][i]]==NOT){
					v[r][ed[no.front()][i]]=v[r][no.front()]+edco[no.front()][i];
					cnt++;
					no.push(ed[no.front()][i]);
				}
			}
			no.pop();
		}
	}
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			if(v[i][j]!=NOT) cout<<v[i][j];
			else cout<<"INF";
			if(j==V-1) cout<<endl;
			else cout<<" ";
		}
	}
}