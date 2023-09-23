#include <iostream>
using namespace std;


int W,H,N;


int main(void)
{

	while(cin >> W >> H, W | H){
	
	cin >> N;

	int a,b;
	int load[120][120] = {};
	for(int i = 0; i < N; i++){
		cin >> a >> b;
		load[b][a] = -1;
	}
	load[1][1] = 1;
	
	for(int i = 1; i <= 100; i++){
		for(int j = 1; j <= 100; j++){
			if(load[i][j] >= 0 && load[i][j+1] >= 0)
				load[i][j+1] += load[i][j];
			if(load[i][j] >= 0 && load[i+1][j] >= 0)
				load[i+1][j] += load[i][j];
		}
	}
	cout << load[H][W] << endl;
	}
	return 0;
}