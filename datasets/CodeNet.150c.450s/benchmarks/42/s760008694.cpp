// 2016/05/28 Tazoe

#include <iostream>
#include <queue>
#include <string>
using namespace std;

// ????????????????????????
class Proc{
public:
	string nam;
	int tim;
	Proc(){  nam = "";  tim = 0;  }
};

int main()
{
	queue<Proc> Q;

	int n, q;
	cin >> n >> q;

	for(int i=0; i<n; i++){
		Proc P;
		cin >> P.nam >> P.tim;

		Q.push(P);
	}

	int total_tim = 0;

	while(!Q.empty()){
		Proc P = Q.front();  Q.pop();

		if(P.tim<=q){
			total_tim += P.tim;

			cout << P.nam << ' ' << total_tim << endl;
		}
		else{
			total_tim += q;
			P.tim -= q;

			Q.push(P);
		}
	}

	return 0;
}