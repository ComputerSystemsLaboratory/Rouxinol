#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long int map[100][21] = {0} ;
	
	int* intarray = new int[n];

	for(int i=0;i<n;i++){
		cin >> intarray[i];
	}

	map[0][intarray[0]] = 1;
	for(int i=0;i<n-2;i++){
		for(int j=0;j<21;j++){
			if(map[i][j] != 0){
				if(j+intarray[i+1] <= 20){
					map[i+1][j+intarray[i+1]] += map[i][j];
				}
				if(j-intarray[i+1] >= 0){
					map[i+1][j-intarray[i+1]] += map[i][j];
				}
			}
		}
	}
	
	cout << map[n-2][intarray[n-1]] << endl;
}