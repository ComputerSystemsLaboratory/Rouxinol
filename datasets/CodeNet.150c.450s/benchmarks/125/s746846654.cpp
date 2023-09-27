#include<iostream>
#include<vector>
#include<string>
using namespace std;

void InputSet(std::vector<int> & a) {
	int n;
	cin >> n;
	a.resize(n,0);
	for(int i=0;i<n;++i) {
		cin >> a.at(i);
		a.at(i)--;
	}
}
void DFS(vector<vector<int> > & Ad,
		 vector<int> & D,
		 vector<int> & F,
		 int & time,
		 int idx)
{
	if (F[idx] < 0) {
		for(int i=0;i<(int)Ad[idx].size();++i) {
			int next = Ad[idx][i];
			if (D[next] < 0) {
				D[next] = time++;
				DFS(Ad,D,F,time,next);
			}
		}
		F[idx]= time++;
	}
}
int main(){
	int n;
	cin >> n;
	vector<vector<int> > Ad(n);
	vector<int> D(n,-1),F(n,-1);
	for(int k=0;k<n;++k) {
		int u;
		cin >> u;
		--u;
		InputSet(Ad[u]);
	}
	int time=1;
	for(int i=0;i<n;++i) {
		if (D[i] < 0) {
			D[i] = time++;
			DFS(Ad,D,F,time,i);
		}
	}

	for(int i=0;i<n;++i){
		cout << i + 1 << " " << D[i] << " " << F[i] << endl;
	}
}