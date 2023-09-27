#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int n, r;
	
	while(cin >> n >> r, n | r){
		vector<int> p, c;
		int tempp, tempc;
		vector< vector<int> > deck;
		
		deck.resize(r + 1);
		for(int i = 0; i <= r; i++){
			deck[i].resize(n);
		}
		
		for(int i = 0; i < n; i++){
			deck[0][i] = n - i;
		}
		
		for(int i = 0; i < r; i++){
			cin >> tempp >> tempc;
			p.push_back(tempp);
			c.push_back(tempc);
		}
		
		for(int i = 1; i <= r; i++){
			int count = 0;
			for(int j = p[i - 1] - 1; j < p[i - 1] + c[i - 1] - 1; j++){
				deck[i][count] = deck[i - 1][j];
				count++;
			}
			for(int k = 0; k < p[i - 1] - 1; k++){
				deck[i][count] = deck[i - 1][k];
				count++;
			}
			for(int l = p[i - 1] + c[i - 1] - 1; l < n; l++){
				deck[i][count] = deck[i - 1][l];
				count++;
			}
		}
		
		cout << deck[r][0] << endl;
	}
	
	return 0;
}