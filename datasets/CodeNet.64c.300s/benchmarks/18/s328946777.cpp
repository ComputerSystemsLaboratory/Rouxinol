#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void){
	int way[32];
	int n;
	way[1] = 1;
	way[2] = 2;
	way[3] = 4;
	for(int i=4;i<=30;i++){
		way[i] = way[i-1]+way[i-2]+way[i-3];
	}

	while(cin>>n&&n){
		cout << ceil((double)way[n]/3650) << endl;
	}
}