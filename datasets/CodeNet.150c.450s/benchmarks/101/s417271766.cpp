#include <bits/stdc++.h>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;
int friendid[100000]={0};


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector< vector<int> > v;
	vector<int> u;
	int n,m,r,l,id=0,k;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		u.push_back(i);
		u.push_back(0);
		v.push_back(u);
		u.pop_back();
		u.pop_back();
	}
	for(int i=0;i<m;i++){
		cin >> r >> l;
		++v[r][1];
		++v[l][1];
		v[r].push_back(l);
		v[l].push_back(r);
	}

	queue<int> q;
	for(int i=0;i<n;i++){

		if(friendid[i]==0){


			q.push(i);
			++id;
			friendid[i]=id;
			while(q.size()){
				k = q.front();
				q.pop();
				for(int j=0;j<v[k][1];j++){
					if(friendid[v[k][j+2]]==0){
						friendid[v[k][j+2]]=id;
						q.push(v[k][j+2]);
					}
				} 
			}
		}
	}


	int qn;
	cin >> qn;
	for(int i=0;i<qn;i++){
		cin>>r>>l;
		if(friendid[r]==friendid[l])cout << "yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}