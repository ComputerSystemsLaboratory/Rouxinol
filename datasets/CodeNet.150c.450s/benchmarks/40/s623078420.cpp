#include<iostream>

using namespace std;

class dice {
public:
	int f[6];
	dice(int f1, int f2, int f3, int f4, int f5, int f6):
		f{f1, f2, f3, f4, f5, f6}{}
	void rollN() {
		int t=f[0];
		f[0]=f[1];
		f[1]=f[5];
		f[5]=f[4];
		f[4]=t;
	}
	void rollE() {
		int t=f[0];
		f[0]=f[3];
		f[3]=f[5];
		f[5]=f[2];
		f[2]=t;
	}
	void rollS() {
		int t=f[0];
		f[0]=f[4];
		f[4]=f[5];
		f[5]=f[1];
		f[1]=t;
	}
	void rollW() {
		int t=f[0];
		f[0]=f[2];
		f[2]=f[5];
		f[5]=f[3];
		f[3]=t;
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int f1, f2, f3, f4, f5, f6;
	cin>>f1>>f2>>f3>>f4>>f5>>f6;
	dice d(f1, f2, f3, f4, f5, f6);
	char dir;
	while(cin>>dir) {
		if(dir=='N') d.rollN();
		else if(dir=='E') d.rollE();
		else if(dir=='S') d.rollS();
		else if(dir=='W') d.rollW();
	}
	cout<<d.f[0]<<'\n';
	return 0;
}

