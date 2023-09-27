#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

bool flag = true;

void bai(int N){
	if(N%3==0) {
		cout << ' ' << N;
		flag = false;
	}
}

void three(int N){
	int x=N;
	while(true){
		if (x%10 == 3) {
			cout << ' ' << N;
			break;
		}
		
		x /= 10;
		if (x==0) break;
	}
}


int main(){
	int n;
	cin >> n;
	
	for (int i=1; i<=n; i++){
		bai(i);
		if(flag) three(i);
		flag = true;
	}
	cout << endl;
}