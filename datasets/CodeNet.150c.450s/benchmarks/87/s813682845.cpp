
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define REP(i,j,n) for(int i = j; i < n; i++)


int main(){

	while(1){

		int H;
		int sum = 0;
		cin >> H;

		if(H == 0){
			break;
		}

		vector< vector <int> > v(H, vector<int>(8));

		rep(i, H){
			rep(j, 5){
				cin >> v[i][j];
			}
		}

		while(1){

			int A = 0;

			rep(i, H){
				rep(j, 3){
					if(v[i][j] == v[i][j + 1] && v[i][j] == v[i][j + 2] ){
						sum += v[i][j] * 3;
						if(v[i][j] == v[i][j + 3]){
							sum += v[i][j];
							v[i][j + 3] = 0;
							if(v[i][j] == v[i][j + 4]){
								sum += v[i][j];
								v[i][j + 4] = 0;
							}
						}
						v[i][j] = 0;
						v[i][j + 1] = 0;
						v[i][j + 2] = 0;
					}
				}
			}


			while(1){
				int p = 0;
				rep(i,H - 1){
					rep(j, 5){
						if(v[i+1][j] == 0 && v[i][j] != 0){
							p++;
							A++;
							v[i+1][j] = v[i][j];
							v[i][j] = 0;
						}
					}
				}
				if(p == 0){
					break;
				}
			}
			
			if(A == 0){
				break;
			}
		}
		cout << sum << endl;
	}

	return 0;
}