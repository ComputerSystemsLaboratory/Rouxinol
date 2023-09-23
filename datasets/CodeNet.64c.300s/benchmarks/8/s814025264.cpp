#include<iostream>
#include <cstdio>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int t = 1; t <= n; t++){
		if (t % 3 == 0)cout << " " << t;
		else{
			int s = t;
			for (int i = 0;s!=0;){
				if (s % 10 == 3){
					cout << " " << t;
					i++;
				}
				s = s / 10;
				if (i == 1)break;
			}
		}
	}
	cout << endl;
	return 0;
}

