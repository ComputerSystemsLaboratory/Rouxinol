#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(void){
	const int INF = INT_MAX/4;
	int machi, miti;
	int time[10][10];

	while(true){
		// init
		for(int i=0; i<10; i++){
			for(int j=0; j<10; j++){
				if( i==j )
					time[i][j] = 0;
				else
					time[i][j] = INF;
			}
		}

		cin >> miti;
		if( miti==0 )
			break;
		machi = 0;
		for(int i=0; i<miti; i++){
			int from, to, t;
			cin >> from >> to >> t;
		
			machi = max(from, machi);
			machi = max(to, machi);
		
			time[from][to] = t;
			time[to][from] = t;
		}
		machi++;


		for(int k=0; k<machi; k++){
			for(int i=0; i<machi; i++){
				for(int j=0; j<machi; j++){
					time[i][j] = min(time[i][j], time[i][k]+time[k][j]);
				}
			}
		}

		int maxTime = INF, maxMachi = -1;
		for(int i=0; i<machi; i++){
			int temp = 0;
			for(int j=0; j<machi; j++)
				temp += time[i][j];
			if( temp < maxTime ){	
				maxTime = temp;
				maxMachi = i;
			}
		}

		cout << maxMachi << " " << maxTime << endl;
	}

	return 0;
}