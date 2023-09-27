/*

#include<iostream>
//#include<array>
using namespace std;
int main(void){

int num_info;
cin >> num_info;

int house[4][3][10];

//house????????????
for (int k = 0; k < 4; k++){
for (int j = 0; j < 3; j++){
for (int i = 0; i < 10; i++){
house[k][j][i]=0;
}
}
}

for (int i = 0; i < num_info; i++){
int b, f, r, v;
cin >> b >> f >> r >> v;
house[b-1][f-1][r-1] += v;

}

for (int k = 0; k < 4; k++){
for (int j = 0; j < 3; j++){

for (int i = 0; i < 10; i++){
cout << house[k][j][i];
}

cout<<endl;
}

if (k == 3){ break; }
cout << "####################" << endl;
}
//system("pause");

return 0;
}
*/

#include <iostream>

using namespace std;

int main(void){
	int a[4][3][10] = { 0 };
	int n;
	int b, f, r, v;
	cin >> n;
	for (int x = 0; x < n; x++){
		cin >> b >> f >> r >> v;
		for (int i = 0; i < 4; i++){
			for (int j = 0; j < 3; j++){
				for (int k = 0; k < 10; k++){
					if (i == b - 1 && j == f - 1 && k == r - 1){
						a[b-1][f-1][r-1] += v;
					}
				
				}
			
			}
		
		}
	}
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			for (int k = 0; k < 10; k++){
				
				cout << " " << a[i][j][k];
			}
			cout << endl;
		}
		if (i != 3)cout << "####################" << endl;
	}
	return 0;
}