
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define REP(i,j,n) for(int i = j; i < n; i++)


int main(){

	while(1){

		vector< vector<int> > map (21, vector<int>(21,0));
		vector< vector<int> > map2 (21, vector<int>(21,0));

		int px = 10, py = 10;

		int N;
		cin >> N;

		if(N == 0){
			break;
		}

		vector<int> tx(N);
		vector<int> ty(N);

		rep(i,N){
			cin >> tx[i];
			cin >> ty[i];
			map2[ty[i]][tx[i]] = 1;
		}

		int M;
		cin >> M;

		string str;
		int v;

		rep(i,M){
			cin >> str >> v;

			if(str == "N"){
				for(int i = py; i <= py + v; i++){
					map[i][px] = 1;
				}
				py += v;
			}
			else if(str == "E"){
				for(int i = px; i <= px + v; i++){
					map[py][i] = 1;
				}
				px += v;
			}
			else if(str == "S"){
				for(int i = py; i >= py - v; i--){
					map[i][px] = 1;
				}
				py -= v;
			}
			else if(str == "W"){
				for(int i = px; i >= px - v; i--){
					map[py][i] = 1;
				}
				px -= v;
			}
			  // rep(i,21){
			  // 	rep(j,21){
			  // 		cout << map[i][j] << " ";
			  // 	}
			  // 	cout << endl;
			  // }
			  // cout << endl;
		}

		int sum = 0;

		rep(i,21){
			rep(j,21){
				if(map[i][j] == 0 && map2[i][j] == 1){
					sum++;
				}
			}
		}

		if(sum == 0){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" <<endl;
		}

	}
	return 0;
}