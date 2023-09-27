#include<iostream>
using namespace std;

int main(){
	int sigma[200] = {0},cor = 0,x,dx;
	while(cin >> dx){
		for(x = 0;x < 600;x+=dx){
			sigma[cor] += dx*x*x;
		}
		cor++;
	}
	for(int i= 0;i < cor;i++){
		cout << sigma[i] << endl;
	}
	return 0;
}