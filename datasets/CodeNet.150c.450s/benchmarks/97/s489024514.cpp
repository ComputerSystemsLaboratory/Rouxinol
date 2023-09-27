#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	while(true){
		cin >> N;
		if(N==0){return 0;}

		int* x = new int[N];
		int* y = new int[N];
		x[0]=0; y[0]=0;
		int n, d;

		for(int i=1; i<N; i++){
			cin >> n >> d;
			if(d==0){ x[i] = x[n]-1; y[i] = y[n]; }
			else if(d==1){ x[i] = x[n]; y[i] = y[n]-1; }
			else if(d==2){ x[i] = x[n]+1; y[i] = y[n]; }
			else { x[i] = x[n]; y[i] = y[n]+1; }
		}
		int* x_max = max_element(x,x+N);
		int* x_min = min_element(x,x+N);
		int* y_max = max_element(y,y+N);
		int* y_min = min_element(y,y+N);

		cout << *x_max - *x_min + 1 << " " << *y_max - *y_min + 1 << endl;

		delete[] x; delete[] y;
	}
}