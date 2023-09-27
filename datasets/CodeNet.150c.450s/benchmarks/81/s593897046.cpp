#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
	while(true){
		int n;
		cin >> n;

		if(n == 0){
			break;
		}

		int* start = new int[n];
		int* goal = new int[n];
		int* cost = new int[n];

		for(int i = 0; i < n; i++){
			cin >> start[i] >> goal[i] >> cost[i];
		}

		int town = 0;

		for(int i = 0; i < n; i++){
			town = max(town, max(start[i], goal[i]));
		}

		town++;

		vector<vector<int> > dist(town, vector<int>(town, INT_MAX / 2));

		for(int i = 0; i < n; i++){
			dist[start[i]][goal[i]] = cost[i];
			dist[goal[i]][start[i]] = cost[i];
		}

		for(int i = 0; i < town; i++){
			dist[i][i] = 0;
		}


		for(int k = 0; k < town; k++){
			for(int i = 0; i < town; i++){
				for(int j = 0; j < town; j++){
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
				}
			}
		}
		int* total = new int[town];
		int TOTAL = INT_MAX / 2;
		int S = 0;

		for(int i = 0; i < town; i++){
			total[i] = 0;
		}

		for(int i = 0; i < town; i++){
			for(int j = 0; j < town; j++){
				total[i] += dist[i][j];
			}
			if(TOTAL > total[i]){
				TOTAL = min(TOTAL, total[i]);
				S = i;
			}
		}

		cout << S << " " << TOTAL << endl;
		delete [] start;
		delete [] goal;
		delete [] cost;
		delete [] total;
	}
	return 0;
}