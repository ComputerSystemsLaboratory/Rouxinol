#include <iostream>
#include <vector>

using namespace std;

int N,k[1000];
int v[1000][1000];
int found[1000] = {0},ended[1000] = {0};
int keep;
int checking=0;

void dfs(int cur);

int main() {
	cin >> N;
	for(int i=1;i<N+1;i++) {
		cin >> keep >> k[i];
		for(int j=1;j<k[i]+1;j++) {
			cin >> v[i][j];

		}
	}
	dfs(1);
	while(true) {
		//cout << "processing..." << endl;
		bool flag = false;
		int key = 1;
		for(int i=1;i<N+1;i++) {
			if(found[i] == 0) {
				flag = true;
				key = i;
				break;
			}
		}
		if(flag) {
			dfs(key);
		} else {
			break;
		}
	}
	
	
	for(int i=1;i<N+1;i++) {
		cout << i << " " << found[i] << " " << ended[i] << endl;
	}
	

}

void dfs(int cur) {
	//cout << "process ended" << endl;
	if(!found[cur]) {
		checking++;
		//cerr << "visiting: " << cur << " " << "time: " << checking << endl;
		found[cur] = checking;

	}
	for(int dst=1;dst<N+1;dst++) {
		bool flag = false;
		for(int i=1;i<k[cur]+1;i++) {
			if(v[cur][i] == dst) flag = true;
		}
		if((flag) && (dst != cur) && (!found[dst])) dfs(dst);
	}
	if(!ended[cur]) {
		checking++;
		//cerr << "ended: " << cur << " " << "time: " << checking << endl;
		ended[cur] = checking;
	}
}