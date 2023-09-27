#include <iostream>
#include <string>
using namespace std;

int n;

int main(){
	cin >> n;
	int k=100000;
	for(int i=0;i<n;i++){
		k*=1.05;
		if(k%1000 != 0){
			k-=k%1000;
			k+=1000;
		}
	}
	cout << (int)k <<endl;
	return 0;
}