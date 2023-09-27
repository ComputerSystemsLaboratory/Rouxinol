// 2017/12/26 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int m, nmin, nmax;
		cin >> m >> nmin >> nmax;

		if(m==0 && nmin==0 && nmax==0)
			break;

		int P[200];
		for(int i=0; i<m; i++){
			cin >> P[i];
		}

		int gap = -1;
		int n = -1;

		for(int i=nmin-1; i<nmax; i++){
			int g = P[i]-P[i+1];

			if(gap<=g){
				gap = g;
				n = i+1;
			}

//			cout << i << ' ' << g << ' ' << gap << ' ' << n << endl;
		}

		cout << n << endl;
	}

	return 0;
}