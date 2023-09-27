//last edited at 26.8.2015 by charis

#include<iostream>
using namespace std;

int gcd(int x, int y){
	int z[1000];
	z[0]=x, z[1]=y;
	int i=2;
	int t=1;
	while(t!=0){
		if(z[i-1]==0) break;
		int t=z[i-2]%z[i-1];
		z[i]=t;
		i++;
	}
	return z[i-2];
}

int main(){
	int x,y;
	cin >> x >> y;
	
	cout << gcd(x,y) << endl;
	return 0;
}