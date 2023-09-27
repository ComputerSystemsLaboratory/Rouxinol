#include<iostream>
using namespace std;
int main(){
	long long int N,x=100000,y;
	cin >> N;
	for(int i=0;i<N;i++){
		x = x * 105 / 100;
		y = x/1000;
		if((x%1000)!=0)	x = (y+1)*1000;
	}
	cout << x << endl;
}