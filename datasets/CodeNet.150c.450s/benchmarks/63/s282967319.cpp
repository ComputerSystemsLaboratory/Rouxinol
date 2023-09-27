#include <iostream>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

const int Inf = 10000*100000+100;
int a,b,V,E,R,S,Start[500000+10],To[500000+10],Dis[500000+10],N[500000+10];
int Ans[100000+10];

priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > Q;


int main() {
	cin >> V >> E >> R;
	for (int i=1; i<=E; i++){
		cin >> S >> To[i] >> Dis[i];
		N[i] = Start[S];
		Start[S] = i;
	}
	
	fill(Ans,Ans+100010,Inf);
	Ans[R] = 0;
	Q.push(make_pair(0,R));
	
	while(!Q.empty()){
		a = Q.top().first;
		b = Q.top().second;
		Q.pop();
		if (Ans[b] == a){
			for(int i=Start[b]; i; i=N[i]){
				int t = To[i];
				if (a+Dis[i] < Ans[t]){
					Ans[t] = a+Dis[i];
					Q.push(make_pair(Ans[t],t));
				}
			}
		}	
	}
	
	for (int i=0; i<V; i++){
		if (Ans[i] < Inf){
			cout << Ans[i] << endl;
		}else{
			cout << "INF" << endl;
		}
	}	
}