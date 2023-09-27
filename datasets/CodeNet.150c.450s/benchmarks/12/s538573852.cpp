#include<bits/stdc++.h>
#define N 1000
using namespace std;

int par(int i){
	return i/2;
}
int lef(int i){
	return i*2;
}
int right(int i){
	return i*2 + 1;
}

int main(){
	int H;
	vector<int> data(N);
	cin >> H;
	for(int i=1;i<=H;i++) cin >> data.at(i);
	
	for(int i=1;i<=H;i++){
		cout << "node " << i << ": key = " << data.at(i) << ", ";
		if(par(i)>=1) cout << "parent key = " << data.at(par(i)) << ", ";
		if(lef(i)<=H) cout << "left key = " << data.at(lef(i)) << ", ";
		if(right(i)<=H) cout << "right key = " << data.at(right(i)) << ", ";
		cout << endl;
	}
}
