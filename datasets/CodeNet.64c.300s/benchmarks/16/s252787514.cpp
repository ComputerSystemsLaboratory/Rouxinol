#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(){
	int n;
	cin >> n;
	int r[n];
	for(int i = 0; i < n; i++)cin >> r[i];
	int i,min = 1e9 + 1,maxdif = -1e9 - 1;
	for(i = 0; i < n - 1; i++){
		if(r[i] < min){
			min = r[i];
			int max = 0;
			for(int j = i + 1; j < n; j++){
				if(r[j] > max){
					max = r[j];
				}
			}
			if(max - min > maxdif){
				maxdif = max - min;
			}
		}
	}
	cout << maxdif << endl;
}
