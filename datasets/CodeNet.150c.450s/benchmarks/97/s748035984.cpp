#include <iostream>
using namespace std;

int main(void){
	int N;

	while(cin>>N, N){
		int x[N],y[N];
		x[0] = y[0] = 0;
		int minX=0,maxX=0,minY=0,maxY=0;

		for(int i=1;i<N;i++){
			int n,d;
			cin>>n>>d;

			x[i] = x[n];
			y[i] = y[n];
			if(d == 0) x[i]--;
			if(d == 1) y[i]++;
			if(d == 2) x[i]++;
			if(d == 3) y[i]--;

			minX = min(minX,x[i]);
			minY = min(minY,y[i]);
			maxX = max(maxX,x[i]);
			maxY = max(maxY,y[i]);
		}

		cout<<maxX-minX+1<<" "<<maxY-minY+1<<endl;
	}

	return 0;
}