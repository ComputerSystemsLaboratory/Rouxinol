#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

string str;
int ans;

class dice{
public:
	int n[6];
	void E(){
		int t = n[0];
		n[0] = n[3];
		n[3] = n[5];
		n[5] = n[2];
		n[2] = t;
	}
	void W(){
		int t = n[0];
		n[0] = n[2];
		n[2] = n[5];
		n[5] = n[3];
		n[3] = t;
	}
	void S(){
		int t = n[0];
		n[0] = n[4];
		n[4] = n[5];
		n[5] = n[1];
		n[1] = t;
	}
	void N(){
		int t = n[0];
		n[0] = n[1];
		n[1] = n[5];
		n[5] = n[4];
		n[4] = t;
	}
};


int main(){
	dice d;
	rep(i, 6) cin >> d.n[i];
	cin >> str;
	ans = d.n[0];
	rep(i, str.length()){
		switch (str[i])
		{
		case 'E':
			d.E();
			break;
		case 'W':
			d.W();
			break;
		case 'S':
			d.S();
			break;
		case 'N':
			d.N();
			break;
		default:
			break;
		}
	}
	cout << d.n[0] << endl;
	return 0;
}