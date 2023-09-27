#include<iostream>
#include<algorithm>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

class Dice
{
public:
	int lab[6];
};

int main() {
	Dice dice;
	int q, i, j, a, b, ai, bi;
	//input
	rep(i,6) cin >> dice.lab[i];
	cin >> q;

	//process
	rep(i,q) {
		cin >> a >> b;
		rep(j,6) {
			if (dice.lab[j] == a) ai = j;
			if (dice.lab[j] == b) bi = j;
		}
		if ((ai==3&&bi==1)||(ai==1&&bi==2)||(ai==2&&bi==4)||(ai==4&&bi==3)) {
			cout << dice.lab[0] << endl;
		} else if ((ai==0&&bi==3)||(ai==3&&bi==5)||(ai==5&&bi==2)||(ai==2&&bi==0)) {
			cout << dice.lab[1] << endl;
		} else if ((ai==0&&bi==1)||(ai==1&&bi==5)||(ai==5&&bi==4)||(ai==4&&bi==0)) {
			cout << dice.lab[2] << endl;
		} else if ((ai==0&&bi==4)||(ai==4&&bi==5)||(ai==5&&bi==1)||(ai==1&&bi==0)) {
			cout << dice.lab[3] << endl;
		} else if ((ai==0&&bi==2)||(ai==2&&bi==5)||(ai==5&&bi==3)||(ai==3&&bi==0)) {
			cout << dice.lab[4] << endl;
		} else if ((ai==1&&bi==3)||(ai==3&&bi==4)||(ai==4&&bi==2)||(ai==2&&bi==1)) {
			cout << dice.lab[5] << endl;
		}
	}

	return 0;
}