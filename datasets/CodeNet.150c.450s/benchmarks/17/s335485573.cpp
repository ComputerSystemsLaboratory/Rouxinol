#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a[5];
	for(int i=0;i<5;i++) cin >> a[i];
	while(1){
		bool j = true;
		for(int i=0;i<4;i++){
			if(a[i]<a[i+1]){
				int t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
				j = false;
			}
		}
		if(j) break;
	}
	for(int i=0;i<4;i++) cout << a[i] << " ";
	cout << a[4] << endl;
}