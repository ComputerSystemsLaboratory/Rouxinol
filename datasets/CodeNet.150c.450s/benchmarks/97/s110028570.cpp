#include <iostream>
using namespace std;

int main(void){
	while(1){
		int n;
		cin>>n;
		if(n == 0) break;

		int x[n],y[n];
		x[0] = y[0] = 0;
		int minX=0,minY=0,maxX=0,maxY=0;

		for(int i=1;i<n;i++){
			int a,b;
			cin>>a>>b;

			//ツ債カツ堕、
			if(b == 0){
				x[i] = x[a] - 1;
				y[i] = y[a];
			}
			//ツ可コツ堕、
			else if(b == 1){
				x[i] = x[a];
				y[i] = y[a] - 1;
			}
			//ツ右ツ堕、
			else if(b == 2){
				x[i] = x[a] + 1;
				y[i] = y[a];
			}
			//ツ湘」ツ堕、
			else if(b == 3){
				x[i] = x[a];
				y[i] = y[a] + 1;
			}

			if(minX > x[i]) minX = x[i];
			if(minY > y[i]) minY = y[i];
			if(maxX < x[i]) maxX = x[i];
			if(maxY < y[i]) maxY = y[i];
		}
		cout<<maxX - minX + 1<<" "<<maxY - minY + 1<<endl;
	}

	return 0;
}