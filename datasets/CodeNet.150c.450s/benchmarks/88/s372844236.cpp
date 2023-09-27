#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<map>
#include<cmath>
#include<queue>	

using namespace std;

namespace MyLib {
#define ALL(a) a.begin(),a.end()
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)
#define debug(x) if(1)cout<<#x<<":"<<x<<endl;
#define DEBUG(x) if(1)cout<<#x<<":"<<x<<endl;
#define ll long long
}

using namespace MyLib;


int main() {
	int h, w;
	int sq;
	while (cin >> h >> w, h) {
		sq = h*h + w*w;
		int wa=10000, ha=10000,msq=100000;
		for (int i = 1; i <= 150; i++)
			for (int j = i + 1; j <= 150; j++)
				if (sq <= i*i + j*j)
					if (sq == i*i + j*j&&h >= i)
						continue;
					else {
						if (msq > i*i + j*j || msq == i*i + j*j && ha > i) {
							msq = i*i + j*j;
							wa = j;
							ha = i;

						}
					}


		cout << ha <<' '<< wa << endl;





	}



	return 0;


}