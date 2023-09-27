#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

string str;
int ans;

class dice{
public:
	int con[6];
	int n[6];
	
	void res(){
		rep(i, 6) n[i] = con[i];
	}

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
	void spin(){
		int t = n[1];
		n[1] = n[2];
		n[2] = n[4];
		n[4] = n[3];
		n[3] = t;
	}
};


int main(){
	dice d;
	rep(i, 6){
		cin >> d.con[i];
		d.n[i] = d.con[i];
	}
	int q;
	cin >> q;
	rep(i, q){
		int a, b;
		cin >> a >> b;
		d.res();
		rep(i, 4){
			d.W();
			if (d.n[0] == a){
				goto endcheck;
			}
		}
		rep(i, 4){
			d.S();
			if (d.n[0] == a){
				goto endcheck;
			}
		}
	endcheck:
		while (d.n[1] != b){
			d.spin();
		}
		cout << d.n[2] << endl;
	}
	return 0;
}