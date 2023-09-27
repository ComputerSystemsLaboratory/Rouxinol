#include <iostream>
#include <vector>
using namespace std;

int main(){
	int mayors[50]{0};

	for(;;){
		int n, p;
		cin >> n >> p;
		if (n == 0) break;

		for (int i = 0; i < n; i++) mayors[i] = 0;
		int bowlp = p;
		int turn = 0;
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
		cout << turn << endl;
	}
	return 0;
}