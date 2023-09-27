#include<string>
#include<iostream>
using namespace std;


class Dice{
	int dn[6];
	int up, front;
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

	void Result(string m){
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
//		return dn[0];
	}

	string Dice2(int a,int b){
		up = a;
		front = b;
		string qq;

		if (up == dn[0]){
			if (front == dn[2]){
				qq = "WSE";
			}
			else if (front == dn[3]){
				qq = "ESW";
			}
			else if (front == dn[4]){
				qq = "WSSE";
			}
		}
		else if (up == dn[1]){
			if (front == dn[0]){
				qq = "SEE";
			}
			else if (front == dn[2]){
				qq = "WSEE";
			}
			else if (front == dn[3]){
				qq = "ESWW";
			}
			else if (front == dn[5]){
				qq = "N";
			}
		}
		else if (up == dn[2]){
			if (front == dn[0]){
				qq = "SW";
			}
			else if (front == dn[1]){
				qq = "W";
			}
			else if (front == dn[4]){
				qq = "SSW";
			}
			else if (front == dn[5]){
				qq = "NW";
			}
		}
		else if (up == dn[3]){
			if (front == dn[0]){
				qq = "SE";
			}
			else if (front == dn[1]){
				qq = "E";
			}
			else if (front == dn[4]){
				qq = "SSE";
			}
			else if (front == dn[5]){
				qq = "NE";
			}
		}
		else if (up == dn[4]){
			if (front == dn[0]){
				qq = "S";
			}
			else if (front == dn[2]){
				qq = "WS";
			}
			else if (front == dn[3]){
				qq = "ES";
			}
			else if (front == dn[5]){
				qq = "WWS";
			}
		}
		else if (up == dn[5]){
			if (front == dn[1]){
				qq = "WW";
			}
			else if (front == dn[2]){
				qq = "SWS";
			}
			else if (front == dn[3]){
				qq = "ESE";
			}
			else if (front == dn[4]){
				qq = "NN";
			}
		}

		return qq;

	}

	int get_right(){
		return dn[2];
	}
};

int main()
{
	int dnum[6];
	int qno, ue, mae;
	string q;

	for (int i = 0; i < 6; i++){
		cin >> dnum[i];
	}

	Dice d(dnum[0], dnum[1], dnum[2], dnum[3], dnum[4], dnum[5]);
	
	cin >> qno;
	for (int i = 0; i < qno; i++){
		cin >> ue >> mae;
		q = d.Dice2(ue, mae);
		d.Result(q);
		cout << d.get_right() << endl;
	}

	return 0;
}

