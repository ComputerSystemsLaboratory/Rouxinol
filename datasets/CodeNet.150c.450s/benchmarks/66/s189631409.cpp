#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<numeric>
#include<string>
#include<cstdio>
using namespace std;

int main(){
	int n, m;
	bool door = false;
	string id[256];
	string id2;

	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> id[i];
	}

	cin >> m;

	for (int i = 0; i < m; i++){
		cin >> id2;
		for (int j = 0; j < n; j++){
			if (id2 == id[j]){
				door = !door;
				if (door){
					cout << "Opened by " << id2 << endl;
				}
				else cout << "Closed by " << id2 << endl;
				break;
			}
			else {
				if (j == n - 1)
					cout << "Unknown " << id2 << endl;
			}
		}
	}
	return 0;
}