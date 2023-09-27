#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<int> dice(6);
	int n;
	for(auto &a: dice){
		cin >> a;
	}
	cin >> n;
	int tmp;
	for(int i = 0; i < n; i++){
		int top,front;
		cin >> top >> front;
		while (1){
			if (dice[0] == top) break;
			tmp =dice[0];
			dice[0] =dice[1];
			dice[1] =dice[5];
			dice[5] =dice[4];
			dice[4] = tmp;
			if (dice[0] == top) break;
			tmp =dice[0];
			dice[0] =dice[1];
			dice[1] =dice[5];
			dice[5] =dice[4];
			dice[4] = tmp;
			if (dice[0] == top) break;
			tmp =dice[0];
			dice[0] =dice[3];
			dice[3] =dice[5];
			dice[5] =dice[2];
			dice[2] = tmp;
			if (dice[0] == top) break;
			tmp =dice[0];
			dice[0] =dice[3];
			dice[3] =dice[5];
			dice[5] =dice[2];
			dice[2] = tmp;
		}
		while (dice[1] != front){
            tmp =dice[1];
			dice[1] =dice[2];
			dice[2] =dice[4];
			dice[4] =dice[3];
			dice[3] = tmp;
        }
	cout << dice[2] << endl;	
	}
	return 0;
}	