#include <iostream>
using namespace std;

const int nmax = 50;

int main(){
	int n, p;
	int kouho[nmax];
	while(cin >> n >> p){
		if(n == 0 && p == 0) break;
		for(int i = 0; i < n; i++){
			kouho[i] = 0;
		}
		int num = p;
		int place = 0;
		while(true){
			if(num){
				kouho[place]++;
				if(kouho[place] == p) break;
				num--;
			}else{
				num += kouho[place];
				kouho[place] = 0;
			}
			place++;
			if(place == n) place = 0;
		}
		cout << place << endl;
	}
	return 0;
}