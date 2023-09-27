#include<map>
#include<list>
#include<cmath>
#include<stack>
#include<queue>
#include<vector>
#include<cstring>
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
#define LOOP1(n) for(int i=0;i<n;i++)
#define LOOP2(n) for(int j=0;j<n;j++)
#define LOOP3(n) for(int k=0;k<n;k++)
#define Psi pair<string,int>
#define Pis pair<int,string>
#define Pii pair<int,int>
// ??????????????????memset(a,0,sizeof(a));
// ?´???°?????? if(x<2)return0;else if(x==2)return1;if(x%2==0)return0;for(i=3;i*i<=x;i+=2){if(x%i==0)return0;}return1;}p440
//vector size();push_back(x);pop_back();begin();end();insert(p,x);erase(p);clear();
//stack  size();top();pop();push(x);emtpy();
//queue  size();front();pop();push(x);empty();
//priority_queue< ??? , ??\???????????? , less<???> or greater<???> > <int , vector<int> , greater<int> >
static const int MAX = 100;
static const long long  INFTY = (1LL << 32);
int main(){
	int V, E; int s, t;
	long long int G[MAX][MAX];
	cin >> V >> E;
	LOOP1(V){
		LOOP2(V){
			if (i == j) G[i][j] = 0;
			else G[i][j] = INFTY;
		}
	}
	LOOP1(E){
		cin >> s >> t;
		cin >> G[s][t];
	}
	LOOP3(V){
		LOOP1(V){
			if (G[i][k] == INFTY) continue;
			LOOP2(V){
				if (G[k][j] == INFTY) continue;
				G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
			}
		}
	}bool flag = false;
	LOOP1(V) if (G[i][i] < 0) flag = true;
	if (flag) cout << "NEGATIVE CYCLE" << endl;
	else {
		LOOP1(V){
			LOOP2(V){
				if (G[i][j] == INFTY) cout << "INF";
				else cout << G[i][j];
				if (j != V - 1) cout << " ";
			}cout << endl;
		}
	}
	return 0;
}