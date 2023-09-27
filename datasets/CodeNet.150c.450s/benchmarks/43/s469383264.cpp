#include<iostream>
using namespace std;
int main() {
	int n = 1, Acard,Bcard,Ascore=0,Bscore=0;
	while (n) {
		cin >> n;
		if (n == 0) { break; }
		for (int i = 0; i < n; i++) {
			cin >> Acard >> Bcard;
			if (Acard > Bcard) {
				Ascore += Acard + Bcard;
			}
			else if (Acard < Bcard) {
				Bscore += Acard + Bcard;
			}
			else {
				Ascore += Acard;
				Bscore += Bcard;
			}
		}
		cout << Ascore << " " << Bscore<<endl;
		Ascore = 0; Bscore = 0;
	}
	return 0;
}