#include <iostream>
using namespace std;

int _abs (int n) { return n<0?-n:n; }
int main () {
	int i,n,d,a,T[20]={1},S[10]={4};
	for (i=1;i<20;++i) T[i]=T[i-1]+(i+1)*T[0];
	for (i=1;i<10;++i) S[i]=S[i-1]+(i+1)*S[0];
	while (cin>>n) {
		d=18-_abs(n-18);a=0;
		if (0<=d&&d<=18) {
			for (i=d+1;i--;) a+=T[i];
			if (d>9) for (i=d-9;i--;) a-=S[i];
		}
		cout << a << endl;
	}
}