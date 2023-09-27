#include <iostream>
#include <vector>
using namespace std;

int main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
	vector<int> ansvec;

	for(;;){
		int n, p;
		cin >> n >> p;
		if (n == 0) break;
		
		int bowlp = p;
		int turn = 0;
		int mayors[50]{0};
		for(;;){
			if (bowlp == 1 && mayors[turn] == p - 1) break;
			else if (bowlp == 0){
				bowlp += mayors[turn];
				mayors[turn] = 0;
			}
			else{
				mayors[turn]++;
				bowlp--;
			}

			if (turn == n - 1) turn = 0;
			else turn++;
		}
		ansvec.push_back(turn);
	}

	for (int ans : ansvec){
		cout << ans << endl;
	}
	return 0;
}