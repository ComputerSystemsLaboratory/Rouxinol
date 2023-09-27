#include<iostream>
using namespace std;

int data1[] = {0,20,19,20,19,20,19,20,19,20,19};
int data2[] = {0,20,20,20,20,20,20,20,20,20,20};

int main(){
	int n;
	int y,m,d;
	int millennium = 1;
	int ans = 0;

	for(int i = 1; i <= 1000-1; i++){
		for(int j = 1; j <= 10; j++){
		if(i%3 != 0) millennium += data1[j];
		else millennium += data2[j];
		}
	}

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> y >> m >> d;
		for(int i = 1; i <= y-1; i++){
			for(int j = 1; j <= 10; j++){
			if(i%3 != 0) d += data1[j];
			else d += data2[j];
			}
		}
		for(int i = 1; i <= m-1; i++){
			if(y%3 != 0) d += data1[i];
			else d += data2[i];
		}
	cout << millennium - d << endl;
	}
}