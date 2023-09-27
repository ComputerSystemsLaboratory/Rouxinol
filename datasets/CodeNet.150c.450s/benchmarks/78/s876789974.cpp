#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int min0[1000000];
	int min1[1000000];
	fill(min0,min0+1000000,100);
	fill(min1,min1+1000000,100);

	for(int j=1;j<300;j++){
		int n = j*(j+1)*(j+2)/6;
		if( n>=1000000) break;
		min0[n] = 1;
		if((n%2)==1){
			min1[n] = 1;
		}
	}


	for(int i=1;i<1000000;i++)
	{
		for(int j=1;j<300;j++){
			int n = j*(j+1)*(j+2)/6;
			if( n+i>=1000000) break;
			min0[n+i] = min( min0[n+i], min0[i]+1);
			if( (n%2)==1){
				min1[n+i] = min( min1[n+i], min1[i]+1);
			}
		}
	}


	while(true){
		int n;
		cin >> n;
		if(n==0)break;
		cout << min0[n] << " " << min1[n] << endl;
	}

	return 0;
}