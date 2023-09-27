#include <iostream>
#include <vector>
#include <map>

#define PI 3.14159265359	

using namespace std;

int main(){
	int n, r;
	char s, ss[] = {'S', 'H', 'C', 'D'};
	map<char, map<int, bool> > card;
	cin >> n;
	for (int i = 0; i < 4; i++){
		for (int j = 1; j <= 13; j++){
			card[ss[i]][j] = false;
		}
	}
	for (int i = 0; i < n; i++){
		cin >> s >> r;
		card[s][r] = true;
	}
	for (int i = 0; i < 4; i++){
		for (int j = 1; j <= 13; j++){
			if (!card[ss[i]][j]) cout << ss[i] << " " << j << endl;
		}
	}
}