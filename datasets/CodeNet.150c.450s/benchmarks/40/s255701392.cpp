#include<string>
#include<iostream>
using namespace std;

class Dice{
	int dn[6];
	string qu;

public:
	Dice(int d1, int d2, int d3, int d4, int d5, int d6){
		dn[0] = d1;
		dn[1] = d2;
		dn[2] = d3;
		dn[3] = d4;
		dn[4] = d5;
		dn[5] = d6;
	}

	int Result(string m){
		int w;
		qu = m;

		for (int i = 0; i < qu.size(); i++){
			switch (qu[i]){
			case 'E':
				w = dn[0];
				dn[0] = dn[3];
				dn[3] = dn[5];
				dn[5] = dn[2];
				dn[2] = w;
				break;

			case 'N':
				w = dn[5];
				dn[5] = dn[4];
				dn[4] = dn[0];
				dn[0] = dn[1];
				dn[1] = w;
				break;

			case 'S':
				w = dn[0];
				dn[0] = dn[4];
				dn[4] = dn[5];
				dn[5] = dn[1];
				dn[1] = w;
				break;

			case 'W':
				w = dn[0];
				dn[0] = dn[2];
				dn[2] = dn[5];
				dn[5] = dn[3];
				dn[3] = w;
				break;
			}
		}
		return dn[0];
	}
};

int main()
{
	int dnum[6];
	string q;

	for (int i = 0; i < 6; i++){
		cin >> dnum[i];
	}
	cin >> q;

	Dice d(dnum[0],dnum[1],dnum[2],dnum[3],dnum[4],dnum[5]);
	cout << d.Result(q) << endl;
	
	return 0;
}
