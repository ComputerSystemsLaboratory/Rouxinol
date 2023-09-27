#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){

	int n,p;
	while(cin >> n >> p && !(n == 0 && p == 0)){
		int wan=0;
		int cand[50];
		int tern = 0;
		wan = p;
		fill(cand,cand+50,0);
		while(1){
			if(wan==0){
				wan += cand[tern];
				cand[tern]=0;
			}
			else{
				wan--;
				cand[tern]++;
				if(cand[tern] == p)
					break;
			}
			tern = (tern + 1) % n;
		}
		cout << tern << endl;
	}

	return 0;
}