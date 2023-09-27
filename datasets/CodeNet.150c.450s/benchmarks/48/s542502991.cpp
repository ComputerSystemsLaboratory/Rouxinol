#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int getMinM(int e){
	int mini=INT_MAX;
	for(int y=0;y*y<=e;y++){
		for(int z=0;z*z*z<=e;z++){
			int x = e - ( y*y + z*z*z );
			if(e== x + y*y + z*z*z && x>=0) mini=min(mini,x+y+z);
		}
	}
	return mini;
}

int main(){
	while(1){
		int e;
		cin >> e;
		if(e==0) break;
		int mini=INT_MAX;
		cout << getMinM(e) << endl;
	}
	return 0;
}