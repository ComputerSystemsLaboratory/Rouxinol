#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
void call(int n);
int main(){
	int n;
	cin >> n;
	call(n);
}

void call(int n){
	int i = 1;
	while(i <= n){//CHECK_NUM
		if(i % 3 == 0 || i % 10 == 3){
			cout << " " << i;
		}else if( i > 30){
			int tmp = i;
			while(tmp > 10){
				tmp /= 10;
				if(tmp % 10 == 3){
					cout << " " << i;
					break;
				}
			}
		}
		i++;
	}
	cout << endl;
}

